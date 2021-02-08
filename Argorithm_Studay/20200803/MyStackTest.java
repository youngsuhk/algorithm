
public class MyStackTest {

	public static void main(String[] args) {
		MyStack stack  = new MyStack();
		System.out.println(stack.size());
		stack.push("A");
		stack.push("B");
		stack.push("C");
		
		stack.print();
		System.out.println(stack.size());
		System.out.println(stack.peek());
		System.out.println(stack.pop());
		System.out.println(stack.pop());
		System.out.println(stack.size());

	}

}
