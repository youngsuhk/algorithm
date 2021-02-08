import java.util.Scanner;

public class NQueenTest {
	static int N;
	static int[] col;//각 행의 퀸의 위치를 저장.
	static int answer;
	
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		N=sc.nextInt();
		//2차원 배열로 풀 필요가 없다.
		//한 행에 queen이 여러가지 있을 수 없기 때문.
		col=new int[N+1];//0행은 사용 x
		setQueens(1);
		System.out.println(answer);
	}
	//퀸을 현재(rowNo) 행에 놓기.
	public static void setQueens(int rowNo) {
		if(rowNo>N) {
			//유망한 경우만 계속해서 따라 왔으므로 해가 됨.
			answer++;
			return;
		}
//		1행 : 1열
//		2행 : 1열 x setQueens로 들어가지 않는다. - 2열 x - 3열 o
//		3행 : 1열 x -2열 x - 3열 x ...
		
		//가능한 선택지(1열~ N열)
		for(int j=1;j<=N;j++) {
			col[rowNo]=j;
			if(checking(rowNo)) {//현재 퀸의 말위치가 가능하면 다음 퀸으로
				setQueens(rowNo+1);
			}
			//일차원 배열로 퀸의 위치를 관리하므로 시도했던 선택시 일 값을 되돌릴 필요가 없다.
		}
	}
	//rowNo행의 퀸을 놓는게 가능한지 체크 : 놓을수 있다면 true, 없다면 false
	private static boolean checking(int rowNo) {
		for(int i=1;i<rowNo;i++) {
			//col[rowNo]==col[i] : 같은 열 체크
			//Math.abs(col[rowNo]-col[i])==rowNo-i:대각선 체크
			if((col[rowNo]==col[i])||Math.abs(col[rowNo]-col[i])==rowNo-i)return false;
			
		}
		return true;
	}
}
