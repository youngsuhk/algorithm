class Ticket {
	static int totalCount=100;
	int price=0;
}
public class staticTest {
	public static void main(String[] args) {
		System.out.println(Ticket.totalCount);
		Ticket t=new Ticket();
		Ticket t1=new Ticket();
		//static변수의 경우 변경시 새롭게 생성한 class의 변수도 바뀌는가 ? 
		t.totalCount=200;
		System.out.println(t.totalCount);
		System.out.println(Ticket.totalCount);
		System.out.println(t1.totalCount);
		//바뀌는것을 확인 가능 
		//새롭게 생성한 t의 totalCount=200 으로 변경하자
		//기존의 Ticket의 totalCount와 새로운 t1의 totalCount도 200으로 변경됨
		
		
		//static변수가 아닌 일반 변수인 경우
		t.price=10;
		System.out.println(t.price);
		System.out.println(t1.price);
		//t의 price를 10으로 변경 하였지만 
		//t1의 price는 5로 변경 전과 동일
		//Ticket의 price는 static변수가 아니기 때문에 생성하기 전엔 사용 불가능 
	}
}
