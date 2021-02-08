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
		//0열의 나기부씨 식당의 모든 행의 위치에서 파이프 놓기 시작
		for(int r=0;r<R;r++) {
			visited[r][0]=true;
			go(r,0);
		}
		
		
	}
	static int[] dr= {-1,0,1};
	// 현 위치에서 오른쪽 대각선위(-1,1), 오른쪽(0,1), 오른쪽대각선아래(1,1) 순서적으로 파이프 연결 시작
	//이 함수가 끝까지 가면 true 못가면 false
	private static boolean go(int r,int c) {
		int nr,nc=c+1;
		if(c==C-1) {//나야나씨 식당까지 파이프가 연결된 상황
			cnt++;
			return true;//성공했다는 결과 리턴
		}
		for (int d = 0; d < 3; d++) {
			nr=r+dr[d];
			if(nr<0||nr>=R||visited[nr][nc]||map[nr][nc]=='x')continue;
			visited[nr][nc]=true;//파이프 놓기
			if(go(nr,nc)){//다음 칸으로 이동후 결과가 끝까지 연결이 가능했다면
						  //현 위치에서 다른방향으로 파이프 놓는것을 중단하고 이전 위치로 돌아감
				return true;
			}
		}return false;
	}

}
