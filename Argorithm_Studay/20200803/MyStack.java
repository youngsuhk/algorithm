
public class MyStack {
	SNode head = null;
	int size = 0;
	public void push(String data) {
		SNode temp = new SNode(data, head);
//		if(head != null) {
//			temp.link = head.link;
//		}else {
//			temp.link = null;
//		}
		size++;
		head = temp;
	}
	public String pop() {
		System.out.println("head :  " + head);
		String result = null;
		if(head != null) {
			size--;
			result = head.data;
			head = head.link;
		}
		return result;
	}
	public String peek() {
		System.out.println("peek head :  " + head);
		String result = null;
		if(head != null) {
			result = head.data;
		}
		return result;
	}
	public boolean isEmpty() {
		return head == null ? true : false;
	}
	public int size() {
		return size;
	}
	
	public void print() {
		SNode node = head;
		while(node != null) {
			System.out.println(node.data);
			node = node.link;
		}
	}
//	변화되는 값 매개변수 전달
	public void print1(SNode node) {
//		종료 조건
		if(node == null) {
			return;
		}
		
		System.out.println("출력" + node.data);
//		SNode next = node.link;
		print1(node.link);
	}
}










