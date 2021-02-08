import java.util.Scanner;

public class NQueenTest {
	static int N;
	static int[] col;//�� ���� ���� ��ġ�� ����.
	static int answer;
	
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		N=sc.nextInt();
		//2���� �迭�� Ǯ �ʿ䰡 ����.
		//�� �࿡ queen�� �������� ���� �� ���� ����.
		col=new int[N+1];//0���� ��� x
		setQueens(1);
		System.out.println(answer);
	}
	//���� ����(rowNo) �࿡ ����.
	public static void setQueens(int rowNo) {
		if(rowNo>N) {
			//������ ��츸 ����ؼ� ���� �����Ƿ� �ذ� ��.
			answer++;
			return;
		}
//		1�� : 1��
//		2�� : 1�� x setQueens�� ���� �ʴ´�. - 2�� x - 3�� o
//		3�� : 1�� x -2�� x - 3�� x ...
		
		//������ ������(1��~ N��)
		for(int j=1;j<=N;j++) {
			col[rowNo]=j;
			if(checking(rowNo)) {//���� ���� ����ġ�� �����ϸ� ���� ������
				setQueens(rowNo+1);
			}
			//������ �迭�� ���� ��ġ�� �����ϹǷ� �õ��ߴ� ���ý� �� ���� �ǵ��� �ʿ䰡 ����.
		}
	}
	//rowNo���� ���� ���°� �������� üũ : ������ �ִٸ� true, ���ٸ� false
	private static boolean checking(int rowNo) {
		for(int i=1;i<rowNo;i++) {
			//col[rowNo]==col[i] : ���� �� üũ
			//Math.abs(col[rowNo]-col[i])==rowNo-i:�밢�� üũ
			if((col[rowNo]==col[i])||Math.abs(col[rowNo]-col[i])==rowNo-i)return false;
			
		}
		return true;
	}
}
