package Sort;

import java.util.Arrays;

public class HIndex {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] citations = { 2, 2, 0, 0, 0 };
		System.out.println(solution(citations));
	}

	public static int solution(int[] citations) {
		int answer = 0;
		Arrays.sort(citations);
		for (int h = 0; h < 10000; h++) {
			int cnt = 0;
			if (h > citations[citations.length - 1])
				break;
			for (int i = 0; i < citations.length; i++) {
				// h번 이상 인용된 논문 개수
				if (h <= citations[i])
					cnt++;
			}
			// h번 이상 인용된 논문이 h이상
			if (cnt >= h && citations.length - cnt <= h)
				if (answer <= h)
					answer = h;
		}
		return answer;
	}
}
