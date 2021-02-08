
public class Test {
	static int b[];
	static boolean isSelected[];
	static int idx=0;
	public static void main(String[] args) {
		int n=3;
		b=new int[n];
		isSelected=new boolean [n];
		recur(0);
		
	}
	static void recur(int x) {
		//종료
 		if(idx>=3) {
			for(int i=0;i<3;i++)
				System.out.print(b[i]+" ");
			System.out.println();
			return ;
		}
		///과정
		
		///재귀
		for(int i=0;i<3;i++) {
			if(isSelected[i])continue;
			b[idx]=i;
			isSelected[i]=true;
			idx++;
			recur(i);
			isSelected[i]=false;
			idx--;
		}
	}
}
