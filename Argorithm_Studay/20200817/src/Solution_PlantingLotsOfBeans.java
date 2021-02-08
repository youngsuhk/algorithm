import java.util.Scanner;

public class Solution_PlantingLotsOfBeans {
	static int map[][];
	static int N,M;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		
		for(int t=1;t<=tc;t++) {
			int cnt=0;
			N=sc.nextInt();
			M=sc.nextInt();
			map=new int[N][M];
			for(int i=0;i<N;i++) {
				for(int j=0;j<M;j++) {
					if((i%4==0||i%4==1)&&(j%4==0||j%4==1))
					{
						map[i][j]=1;
						cnt++;
						
					}
					if((i%4==2||i%4==3)&&(j%4==2||j%4==3))
					{
						map[i][j]=1;
						cnt++;
						
					}
				}
			}
			for(int i=0;i<N;i++) {
				for(int j=0;j<M;j++) {
					System.out.print(map[i][j]+" ");
				}
				System.out.println();
			}
			System.out.println("#"+t+" "+cnt);
		}
	}
	
}
