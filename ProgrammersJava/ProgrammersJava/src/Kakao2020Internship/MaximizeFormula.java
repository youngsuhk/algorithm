package Kakao2020Internship;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Stack;

public class MaximizeFormula {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String expression = "100-200*300-500+20";
		String expression1 = "50*6-3*2";
		System.out.println(solution(expression1));
	}

	static char[] opers;
	static long answer;
	static String exp;

	public static long solution(String expression) {
        exp = expression;
        List<Character> oper = new ArrayList<>();
        if (expression.contains("+")) {
            oper.add('+');
        }
        if (expression.contains("-")) {
            oper.add('-');
        }
        if (expression.contains("*")) {
            oper.add('*');
        }
        opers = new char[oper.size()];
        for (int i = 0; i < opers.length; i++) {
            opers[i] = oper.get(i);
        }
        answer = -1;
        simulation(0);
        return answer;
    }
	static void simulation(int depth) {
        if (depth == opers.length) {
            long ret = calculate();
            answer = Math.max(ret, answer);
            return;
        }
        for (int i = depth; i < opers.length; i++) {
            swap(i, depth);
            simulation(depth + 1);
            swap(i, depth);
        }
    }
	static void swap(int i, int j) {
        char c = opers[i];
        opers[i] = opers[j];
        opers[j] = c;
    }

    static long calculate() {
        HashMap<String, Integer> hm = new HashMap<>();
        for (int i = 0; i < opers.length; i++) {
            hm.put(opers[i] + "", i);
        }
        StringBuilder sb = new StringBuilder();
        List<String> equation = new ArrayList<>();
        Stack<String> arg = new Stack<>();
        int len = exp.length();
        for (int i = 0; i < len; i++) {
            char c = exp.charAt(i);
            if (c == '+' || c == '-' || c == '*') {
                equation.add(sb.toString());
                sb.delete(0, sb.length());
                while (!arg.isEmpty() && hm.get(c+"") <= hm.get(arg.peek())) {
                    equation.add(arg.pop());
                }
                arg.push(c + "");
            } else {
                sb.append(c);
            }
        }
        equation.add(sb.toString());
        while (!arg.isEmpty()) {
            equation.add(arg.pop());
        }

        Stack<Long> value = new Stack<>();
        for (String e : equation) {
            if (hm.containsKey(e)) {
                long b = value.pop();
                long a = value.pop();
                if (e.equals("+")) {
                    value.push(a + b);
                }
                if (e.equals("-")) {
                    value.push(a - b);
                }
                if (e.equals("*")) {
                    value.push(a * b);
                }
            } else {
                value.push(Long.parseLong(e));
            }
        }
        return Math.abs(value.pop());
    }
}

