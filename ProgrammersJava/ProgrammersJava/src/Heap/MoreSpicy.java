package Heap;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.PriorityQueue;

//섞은 음식의 스코빌 지수 = 가장 맵지 않은 음식의 스코빌 지수 + (두 번째로 맵지 않은 음식의 스코빌 지수 * 2)

public class MoreSpicy {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] scoville = { 1, 2, 8, 1, 6, 1, 4, 3, 2, 1 };
		int K = 20;

		System.out.println(solution(scoville, K));
	}

	// 단순 배열을 이용한 코드 : 시간 초가
//	public static int solution(int[] scoville, long K) {
//        int answer = 0;
//        int temp=0;
//        while(true)
//        {
//        	Arrays.sort(scoville);
//        	if(scoville.length==1)
//        	{
//        		if(scoville[0]<K)
//        			return -1;
//        	}
//        	else {
//        		if(scoville[0]>K)
//        			return answer;
//        	}
//        	if(scoville[0]<K) {
//        		temp=scoville[0]+(2*scoville[1]);
//        		scoville[0]=temp;
//        		scoville[1]=1000001;
//        		answer++;
//        	}
//        	else return answer;
//        }
//        
//    }
	// ArrayList를 이용한 코드 : 효율성 테스트에서 시간 초가
//	public static int solution(int[] scoville, long K) {
//		int answer = 0;
//		ArrayList<Integer> arr = new ArrayList<Integer>();
//		Arrays.sort(scoville);
//		// list로 변경
//		for (int i = 0; i < scoville.length; i++) {
//			arr.add(scoville[i]);
//		}
//		while (true) {
//			arr.sort(null);
//			// 하나만 존재하는데 K보다 작으면 -1리턴
//			if (arr.size() == 1) {
//				if (arr.get(0) < K)
//					return -1;
//			}
//			// 하나만 존재하는데 K보다 크면 answer리턴
//			else {
//				if (arr.get(0) > K)
//					return answer;
//			}
//
//			// 2개 이상 존재할 경우 둘중 하나가 K보다 작을 경우
//			if (arr.get(0) < K) {
//
//				arr.add(0, (arr.remove(0) + (arr.remove(0) * 2)));
//				for (int i = 0; i < arr.size(); i++) {
//					System.out.print(arr.get(i) + " ");
//				}
//				System.out.println("size : " + arr.size());
//
//				answer++;
//			} else
//				return answer;
//		}
//	}
	//PriorityQueue를 이용한 heap으로 풀이
	public static int solution(int[] scoville, int K) {
        int answer = 0;
        PriorityQueue<Integer> heap = new PriorityQueue<Integer>();

        for (int aScoville : scoville) {
            heap.add(aScoville);
        }
        
        while (heap.peek() <= K) {
            if (heap.size() == 1) {
                return -1;
            }
            int a = heap.remove();
            int b = heap.remove();

            heap.add(a + (b * 2));
            answer ++;
        }
        return answer;
    }
}
