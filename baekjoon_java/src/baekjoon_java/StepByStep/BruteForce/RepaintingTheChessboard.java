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
		 * ù ��° ĭ�� �������� �� ���� ��ĥ �� ����(cnt)��
		 * ù ��° ĭ�� ���� �ݴ�Ǵ� ���� �������� �� ����
		 * ��ĥ �� ����(64 - cnt) �� �ּڰ��� cnt �� ����
		 */
		cnt=Math.min(cnt,64-cnt);
		min=Math.min(min, cnt);
	}

}
