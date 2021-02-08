import java.util.Scanner;

public class baekjoon_배열돌리기4 {
	static int min=999999999;
	static int N;
	static int M;
	static int K;
	static int a[][];
	static int temp[][];
	static int b[];
	static int cnt=0;
	static boolean isSelected[];
	static int sx[];
	static int sy[];
	static int ex[];
	static int ey[];
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		N=sc.nextInt();
		M=sc.nextInt();
		K=sc.nextInt();
		a=new int[N][M];
		temp=new int [N][M];
		for(int i=0;i<N;i++) 
			for(int j=0;j<M;j++) 
				a[i][j]=sc.nextInt();
			
		
		isSelected=new boolean[K];
		b=new int [K];
		sx=new int [K];
		sy=new int [K];
		ex=new int [K];
		ey=new int [K];
		int r,c,s;
		for(int i=0;i<K;i++) {
			r=sc.nextInt();
			c=sc.nextInt();
			s=sc.nextInt();
			sx[i]=r-s-1;
			sy[i]=c-s-1;
			ex[i]=r+s-1;
			ey[i]=c+s-1;
		}
		arr(0);
		System.out.println(min);
	}
	static void recur(int sx,int sy,int ex,int ey) {
		//종료
		if(sx>=ex)return;
		//과정
		int temp_=0;
		temp_=temp[sx][sy];
		for(int i=sx+1;i<=ex;i++) {
			temp[i-1][sy]=temp[i][sy];
		}
		for(int i=sy+1;i<=ey;i++) {
			temp[ex][i-1]=temp[ex][i];
		}
		for(int i=ex-1;i>=sx;i--) {
			temp[i+1][ey]=temp[i][ey];
		}
		for(int i=ey-1;i>=sy;i--) {
			temp[sx][i+1]=temp[sx][i];
		}
		temp[sx][sy+1]=temp_;
		//재귀
		
		recur(sx+1,sy+1,ex-1,ey-1);
	}
	static void arr(int x) {
		//종료
 		if(cnt>=K) {
			int sum=0;
			
			for(int i=0;i<N;i++) 
				for(int j=0;j<M;j++) 
					temp[i][j]=a[i][j];
				
			for(int i=0;i<K;i++) {
				recur(sx[b[i]],sy[b[i]],ex[b[i]],ey[b[i]]);
			}
//			for(int i=0;i<N;i++) {
//				for(int j=0;j<M;j++) {
//					System.out.print(temp[i][j]+" ");
//				}
//				System.out.println();
//			}System.out.println();
			for(int i=0;i<N;i++)
			{
				sum=0;
				for(int j=0;j<M;j++)
					sum+=temp[i][j];
				if(min>sum)min=sum;
			}
			//System.out.println(min);
			return ;
		}
	
		///과정+ 재귀
		for(int i=0;i<K;i++) {
			if(isSelected[i])continue;
			b[cnt]=i;
			isSelected[i]=true;
			cnt++;
			arr(i);
			isSelected[i]=false;
			cnt--;
		}
	}
}
