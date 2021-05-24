package Heap;

import java.util.*;

/*PriorityQueue사용법
 * 생성
int형 priorityQueue 선언 (우선순위가 낮은 숫자 순)
PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();

int형 priorityQueue 선언 (우선순위가 높은 숫자 순)
PriorityQueue<Integer> priorityQueue = new PriorityQueue<>(Collections.reverseOrder());

String형 priorityQueue 선언 (우선순위가 낮은 숫자 순)
PriorityQueue<String> priorityQueue = new PriorityQueue<>(); 

String형 priorityQueue 선언 (우선순위가 높은 숫자 순)
PriorityQueue<String> priorityQueue = new PriorityQueue<>(Collections.reverseOrder());

*Priority Queue 값 추가
priorityQueue.add(1);     // priorityQueue 값 1 추가
priorityQueue.offer(3);   // priorityQueue 값 3 추가

Priority Queue 값 삭제
priorityQueue.poll();       // priorityQueue에 첫번째 값을 반환하고 제거 비어있다면 null
priorityQueue.remove();     // priorityQueue에 첫번째 값 제거
priorityQueue.clear();      // priorityQueue에 초기화

Priority Queue에서 우선순위가 가장 높은 값 출력
priorityQueue.peek();       // priorityQueue에 첫번째 값 참조 = 1
*/
public class DoublePriorityQueue {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String[] operations = { "I 7", "I 5", "I -5", "D -1" };
		System.out.println(Arrays.toString(solution((operations))));
	}

	public static int[] solution(String[] operations) {
		int[] answer = new int[2];
		PriorityQueue<Integer> pqMin = new PriorityQueue<>();
		PriorityQueue<Integer> pqMax = new PriorityQueue<>(Collections.reverseOrder());
		for (int i = 0; i < operations.length; i++) {
			StringTokenizer st = new StringTokenizer(operations[i]);
			String ch = st.nextToken();
			int value = Integer.parseInt(st.nextToken());
			if (pqMin.size() < 1 && ch.equals("D")) {
				continue;
			}
			if (ch.equals("I")) {
				pqMin.add(value);
				pqMax.add(value);
				continue;
			}
			if (value < 0) {
				int min = pqMin.poll();
				pqMax.remove(min);
				continue;
			} else {
				int max = pqMax.poll();
				pqMin.remove(max);
				continue;
			}
		}
		if (pqMin.size() < 1) {
			answer[0] = 0;
			answer[1] = 0;
		} else {
			answer[0] = pqMax.poll();
			answer[1] = pqMin.poll();
		}
		return answer;
	}
}
