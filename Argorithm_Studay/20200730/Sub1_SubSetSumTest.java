

import java.util.Scanner;

// 입력받은 자연수들로 가능한 부분집합 구성 : 재귀+boolean배열
/**
 * 
 * @author taeheekim
 *
 */
public class Sub1_SubSetSumTest {

	static int N,totalCount, S;
	static int[] input;
	static boolean[] isSelected;

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		S = sc.nextInt();
		input = new int[N];
		isSelected = new boolean[N];
		for(int i=0; i<N; ++i) {
			input[i] = sc.nextInt();
		}
		generateSubSet(0);
		System.out.println("총 경우의 수 : "+totalCount);
	}

	private static void generateSubSet(int count) { // count: 현재까지 고려한 원소 수

		if(count==N) {
//			부분집합의 구성요소의 합
			int sum = 0;
			for(int i=0; i<N; ++i) {
				if(isSelected[i]) {
					sum += input[i];
				}
			}
			if(sum == S) {
				++totalCount;
				for(int i=0; i<N; ++i) {
					System.out.print((isSelected[i]?input[i]:"X")+"\t");
				}
				System.out.println();
			}			
			return;
		}
		//		부분집합에 포함함
		isSelected[count] = true;
		generateSubSet(count+1);	// 다음 원소로 넘어감
		//		부분 집합에 비포함
		isSelected[count] = false;	// 다음 원소로 넘어감
		generateSubSet(count+1);
	}

}
