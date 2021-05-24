package Stack_Queue;

import java.util.*;

/*
 * Queue 선언
 * Queue<Integer> queue = new LinkedList<>(); //int형 queue 선언, linkedlist 이용
 * Queue<String> queue = new LinkedList<>(); //String형 queue 선언, linkedlist 이용

 * Queue 값 추가
 * queue.add(2);     // queue에 값 2 추가
 * queue.offer(3);   // queue에 값 3 추가

 * Queue 값 삭제
 * queue.poll();       // queue에 첫번째 값을 반환하고 제거 비어있다면 null
 * queue.remove();     // queue에 첫번째 값 제거
 * queue.clear();      // queue 초기화

 * Queue 에서 가장 먼저 들어간 값 출력
 * queue.peek();       // queue의 첫번째 값 참조

 */
public class FunctionDevelopment {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] progresses = { 95, 90, 99, 99, 80, 99 };
		int[] speeds = { 1, 1, 1, 1, 1, 1 };
		System.out.println(Arrays.toString(solution(progresses, speeds)));
	}

	public static int[] solution(int[] progresses, int[] speeds) {
		List<Integer> s = new ArrayList<Integer>();

		Queue<Integer> work = new LinkedList<>();
		for (int i = 0; i < progresses.length; i++) {
			work.add((100 - progresses[i]) / speeds[i] + ((100 - progresses[i]) % speeds[i] > 0 ? 1 : 0));
		}

		while (!work.isEmpty()) {
			int cnt = 1;
			int temp = work.poll();
			while (!work.isEmpty() && work.peek() <= temp) {
				cnt++;
				work.poll();
			}
			s.add(cnt);
		}

		int[] answer = new int[s.size()];
		for (int i = 0; i < answer.length; i++) {
			answer[i] = s.get(i);
		}
		return answer;
	}
}
