package baekjoon_java.StepByStep.BruteForce;

import java.util.Scanner;

public class RepaintingTheChessboard {
	static char board[][];
	static int min = 99;
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int N,M;
		String Board[];
		N=sc.nextInt();
		M=sc.nextInt();
		sc.nextLine();
		
		Board=new String[N];
		board=new char[N][M];
		
		for (int i = 0; i < N; i++) {
			Board[i]=sc.nextLine();
			for (int j = 0; j < M; j++) {
				board[i][j]=Board[i].charAt(j);
			}
		}
		
		for (int i = 0; i < N-7; i++) {
			for (int j = 0; j < M-7; j++) {
				find(i,j);
				
			}
		}
		sc.close();
		System.out.println(min);
	
	}
	
	public static void find(int x, int y) {
		
		int cnt=0;
		char ck=board[x][y];
		
		for (int i = x ; i<x+8 ; i++) {
			for (int j = y ; j<y+8 ; j++) {
				if((i+j)%2==(x+y)%2)
				{
					if(board[i][j]!=ck) cnt++;
					
				}else
				{
					if(board[i][j]==ck) cnt++;
				}
			}
		}
		/*
		 * 첫 번째 칸을 기준으로 할 때의 색칠 할 개수(cnt)와
		 * 첫 번째 칸의 색의 반대되는 색을 기준으로 할 때의
		 * 색칠 할 개수(64 - cnt) 중 최솟값을 cnt 에 저장
		 */
		cnt=Math.min(cnt,64-cnt);
		min=Math.min(min, cnt);
	}

}
