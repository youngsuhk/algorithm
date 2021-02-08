import java.util.Arrays;

public class UnioFindTest {
	static int N = 10;
//	makeSet 메소드 
//	unionSet 메소드
//	findSet 메소드
	static int[] p;
	public static void main(String[] args) {
		makeSet();
		union(1,0);
		union(2,1);
		union(3,2);
		union(4,3);
		union(5,4);
		union(6,5);
		union(7,6);
		System.out.println(findSet(1));
		System.out.println(findSet(7));
//		union(0,1);
//		union(1,2);
//		union(2,3);
//		union(3,4);
//		union(4,5);
//		union(5,6);
//		union(6,7);
		System.out.println(Arrays.toString(p));
//		union(0,1);
//		int num1 = findSet(0);
//		int num2 = findSet(1);
//		System.out.println(num1 == num2);
//		
//		union(0,4);
//		num1 = findSet(1);
//		num2 = findSet(4);
		
		
//		System.out.println(num1 == num2);
	}
	static void union(int x, int y) {
		x = findSet(x);
		y = findSet(y);
		if(x != y) {
			p[y] = x;
		}
	}
	static int findSet(int x) {
		if(x == p[x]) {
			return x;
		}
		p[x] = findSet(p[x]);
		return p[x];
	}
	private static void makeSet() {
		p = new int[N];
		for(int i = 0 ; i < N; i++) {
			p[i] = i;
		}
	}
}
