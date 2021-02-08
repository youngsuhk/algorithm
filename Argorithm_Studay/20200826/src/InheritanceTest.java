
public class InheritanceTest {
	public static void main(String[] args) {
		Child c=new Child("상속");
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
		//super() or this() 를 넣지 않을시 문제 발생
		//넣지 않으면 자동으로 super(); 가 컴파일러에서 실행
		//하지만 Parent()에 매개변수가 없는것이 없으므로 문제 발생.
		super(name);
		System.out.println(2);
		this.name=name;
	}
}
