package Kakao2021;

import java.util.LinkedList;
import java.util.Stack;

import Kakao2020Internship.PressTheKeypad.Pos;

public class problem3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n = 8;
		int k = 2;
		String[] cmd = { "D 2", "C", "U 3", "C", "D 4", "C", "U 2", "Z", "Z" };
		String restr=cmd[0].replaceAll("[^0-9]","");
		System.out.println(Integer.parseInt(restr));
		System.out.println(solution(n, k, cmd));
	}

	public static String solution(int n, int k, String[] cmd) {
		String answer = "";
		LinkedList<Integer> list = new LinkedList<Integer>();
		Stack<Integer> stack = new Stack<>();
		for (int i = 0; i < n; i++) {
			list.add(i);
		}
		System.out.println(list);
		String restr;
		for (int i = 0; i < cmd.length; i++) {
			if (cmd[i].charAt(0) == 'D') {
				restr=cmd[i].replaceAll("[^0-9]","");
				k+=Integer.parseInt(restr);
			}
			else if (cmd[i].charAt(0) == 'U') {
				restr=cmd[i].replaceAll("[^0-9]","");
				k-=Integer.parseInt(restr);
			}
			else if (cmd[i].charAt(0) == 'C') {
				stack.push(k);
				list.remove(k);
				if(k==n)k=k-1;
				else k=k;
			}
			else if (cmd[i].charAt(0) == 'Z') {
				int num=stack.pop();
				list.add(num-1,num);
			}
			System.out.println(list);
			System.out.println("k="+k);
		}
		return answer;
	}

	

}
