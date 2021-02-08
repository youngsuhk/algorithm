

import java.util.Stack;

public class CalcTest {

	public static void main(String[] args) {
		String str = "(3+4)+(5+6+7)";
		
		String postOrder = doPostOrder(str);
		System.out.println(postOrder);
//		6528-*2/+
		int num = doCalc(postOrder);
		System.out.println(num);
	}
	static int doCalc(String s) {
		char[] srr = s.toCharArray();
		Stack<Integer> stack = new Stack<Integer>();
		int num1, num2, num3;
		for(char ch : srr) {
			if(ch >= '0' && ch <= '9') {
				stack.push(new Integer(ch+""));  //ch-'0'
			}else {
				num2 = stack.pop();
				num1 = stack.pop();
				num3 = calc(ch, num1, num2);
				stack.push(num3);
			}
		}
		return stack.pop();		
	}
	static int calc(char ch, int num1, int num2) {
		int result = 0;
		switch(ch) {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		}
		return result;
	}
	static String doPostOrder(String s) {
		String result = "";
		char[] srr = s.toCharArray();
		Stack<Character> stack = new Stack<Character>();
		char temp;
		for(char ch : srr) {
			if(ch == '(') {
				stack.push(ch);
			}else if(ch >= '0' && ch <= '9'){
				result += ch;
			}else if(ch == ')'){
				while(!stack.isEmpty() && ((temp = stack.pop()) != '(') ) {
					
					result += temp;					
				}
			}else {
				if(!stack.isEmpty() && getPrority(ch) <= getPrority(stack.peek())) {
					result += stack.pop();
				}
				stack.push(ch);
			}
		}
		return result;
	}
	static int getPrority(char ch) {
		int result = 0;
		switch(ch) {
		case '*':		case '/':
			result = 2;
			break;
		case '+':		case '-':
			result = 1;
			break;
		}		
		return result;
	}

}







