class Ticket {
	static int totalCount=100;
	int price=0;
}
public class staticTest {
	public static void main(String[] args) {
		System.out.println(Ticket.totalCount);
		Ticket t=new Ticket();
		Ticket t1=new Ticket();
		//static������ ��� ����� ���Ӱ� ������ class�� ������ �ٲ�°� ? 
		t.totalCount=200;
		System.out.println(t.totalCount);
		System.out.println(Ticket.totalCount);
		System.out.println(t1.totalCount);
		//�ٲ�°��� Ȯ�� ���� 
		//���Ӱ� ������ t�� totalCount=200 ���� ��������
		//������ Ticket�� totalCount�� ���ο� t1�� totalCount�� 200���� �����
		
		
		//static������ �ƴ� �Ϲ� ������ ���
		t.price=10;
		System.out.println(t.price);
		System.out.println(t1.price);
		//t�� price�� 10���� ���� �Ͽ����� 
		//t1�� price�� 5�� ���� ���� ����
		//Ticket�� price�� static������ �ƴϱ� ������ �����ϱ� ���� ��� �Ұ��� 
	}
}
