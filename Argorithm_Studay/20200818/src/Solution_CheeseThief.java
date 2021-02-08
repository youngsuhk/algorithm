import java.util.Scanner;

public class Solution_CheeseThief {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int tc=sc.nextInt();
		
		for(int t=1;t<=tc;t++) {
			int N=sc.nextInt();
			int map[][]=new int[N][N];
			int max=0;
			for(int i=0;i<N;i++)
				for(int j=0;j<N;j++) {
					map[i][j]=sc.nextInt();
					if(map[i][j]>max)
						max=map[i][j];
				}
			for(int n=2;n<=max;n++) {
				
			}
		}
	}
}
