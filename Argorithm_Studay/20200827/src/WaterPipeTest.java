import java.util.Scanner;

public class WaterPipeTest {
	static int R,C,cnt;
	static char [][] map;
	static boolean[][] visited;
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		R=sc.nextInt();
		C=sc.nextInt();
		map=new char[R][];
		visited= new boolean[R][C];
		for(int i=0;i<R;i++) {
			map[i]=sc.next().toCharArray();
		}
		setPipe(0);
		char ch;
		System.out.println(cnt);
	}
	public static void setPipe(int colNo) {
		//0���� ����ξ� �Ĵ��� ��� ���� ��ġ���� ������ ���� ����
		for(int r=0;r<R;r++) {
			visited[r][0]=true;
			go(r,0);
		}
		
		
	}
	static int[] dr= {-1,0,1};
	// �� ��ġ���� ������ �밢����(-1,1), ������(0,1), �����ʴ밢���Ʒ�(1,1) ���������� ������ ���� ����
	//�� �Լ��� ������ ���� true ������ false
	private static boolean go(int r,int c) {
		int nr,nc=c+1;
		if(c==C-1) {//���߳��� �Ĵ���� �������� ����� ��Ȳ
			cnt++;
			return true;//�����ߴٴ� ��� ����
		}
		for (int d = 0; d < 3; d++) {
			nr=r+dr[d];
			if(nr<0||nr>=R||visited[nr][nc]||map[nr][nc]=='x')continue;
			visited[nr][nc]=true;//������ ����
			if(go(nr,nc)){//���� ĭ���� �̵��� ����� ������ ������ �����ߴٸ�
						  //�� ��ġ���� �ٸ��������� ������ ���°��� �ߴ��ϰ� ���� ��ġ�� ���ư�
				return true;
			}
		}return false;
	}

}
