package Stack_Queue;

import java.util.*;

/*
 * Queue ����
 * Queue<Integer> queue = new LinkedList<>(); //int�� queue ����, linkedlist �̿�
 * Queue<String> queue = new LinkedList<>(); //String�� queue ����, linkedlist �̿�

 * Queue �� �߰�
 * queue.add(2);     // queue�� �� 2 �߰�
 * queue.offer(3);   // queue�� �� 3 �߰�

 * Queue �� ����
 * queue.poll();       // queue�� ù��° ���� ��ȯ�ϰ� ���� ����ִٸ� null
 * queue.remove();     // queue�� ù��° �� ����
 * queue.clear();      // queue �ʱ�ȭ

 * Queue ���� ���� ���� �� �� ���
 * queue.peek();       // queue�� ù��° �� ����

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
