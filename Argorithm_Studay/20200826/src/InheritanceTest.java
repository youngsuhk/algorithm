
public class InheritanceTest {
	public static void main(String[] args) {
		Child c=new Child("���");
		System.out.println(c.name);
	}
}
class Parent{
	String name;
	public Parent() {
		System.out.println(1);
	}
	public Parent(String name) {
		System.out.println(3);
		this.name=name;
	}
}
class Child extends Parent{
	
	Child(String name){
		//super() or this() �� ���� ������ ���� �߻�
		//���� ������ �ڵ����� super(); �� �����Ϸ����� ����
		//������ Parent()�� �Ű������� ���°��� �����Ƿ� ���� �߻�.
		super(name);
		System.out.println(2);
		this.name=name;
	}
}
