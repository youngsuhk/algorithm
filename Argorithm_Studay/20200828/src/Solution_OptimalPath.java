import java.util.Scanner;

public class Solution_OptimalPath {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int tc=sc.nextInt();
		for (int t = 1; t <= tc; t++) {
			int N=sc.nextInt();
			int map[][]=new int[N][2]; 
			for(int i=0;i<N+2;i++) {
				map[i][0]=sc.nextInt();
				map[i][1]=sc.nextInt();
			}
		}
	}
	public static void dfs() {
		
	}
}
