package Heap;

import java.util.ArrayList;
import java.util.Arrays;

//���� ������ ���ں� ���� = ���� ���� ���� ������ ���ں� ���� + (�� ��°�� ���� ���� ������ ���ں� ���� * 2)

public class MoreSpicy {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] scoville = { 1, 2, 8, 1, 6, 1, 4, 3, 2, 1 };
		int K = 20;

		System.out.println(solution(scoville, K));
	}

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
	public static int solution(int[] scoville, long K) {
		int answer = 0;
		ArrayList<Integer> arr = new ArrayList<Integer>();
		Arrays.sort(scoville);
		// list�� ����
		for (int i = 0; i < scoville.length; i++) {
			arr.add(scoville[i]);
		}
		while (true) {
			arr.sort(null);
			// �ϳ��� �����ϴµ� K���� ������ -1����
			if (arr.size() == 1) {
				if (arr.get(0) < K)
					return -1;
			}
			// �ϳ��� �����ϴµ� K���� ũ�� answer����
			else {
				if (arr.get(0) > K)
					return answer;
			}

			// 2�� �̻� ������ ��� ���� �ϳ��� K���� ���� ���
			if (arr.get(0) < K) {

				arr.add(0, (arr.remove(0) + (arr.remove(0) * 2)));
				for (int i = 0; i < arr.size(); i++) {
					System.out.print(arr.get(i) + " ");
				}
				System.out.println("size : " + arr.size());

				answer++;
			} else
				return answer;
		}
	}
}
