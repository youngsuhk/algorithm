import java.util.Arrays;
import java.util.Comparator;

public class BTest {

	public static void main(String[] args) {
		int[] [] arr = {
				{1,2},
				{4,6},
				{2,7},
				{7,9}
			};
		Arrays.sort(arr, new Comparator<int[]>() {

			@Override
			public int compare(int[] o1, int[] o2) {
				// TODO Auto-generated method stub
				return -(o1[1] - o2[1]);
			}
		});

		System.out.println(Arrays.deepToString(arr));
		
//		Integer [] arr = {3,6,8,6,1,9};
//		System.out.println(Arrays.toString(arr));
////		Arrays.fill(a, val);
//		Arrays.sort(arr, new Comparator<Integer>() {
//
//			@Override
//			public int compare(Integer o1, Integer o2) {
//				// TODO Auto-generated method stub
//				return o2 - o1;
//			}
//		});
////		오름차순, 내림차순
//		System.out.println(Arrays.toString(arr));
		

	}

}
