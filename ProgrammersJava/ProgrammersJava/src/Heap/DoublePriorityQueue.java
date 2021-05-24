package Heap;

import java.util.*;

/*PriorityQueue����
 * ����
int�� priorityQueue ���� (�켱������ ���� ���� ��)
PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();

int�� priorityQueue ���� (�켱������ ���� ���� ��)
PriorityQueue<Integer> priorityQueue = new PriorityQueue<>(Collections.reverseOrder());

String�� priorityQueue ���� (�켱������ ���� ���� ��)
PriorityQueue<String> priorityQueue = new PriorityQueue<>(); 

String�� priorityQueue ���� (�켱������ ���� ���� ��)
PriorityQueue<String> priorityQueue = new PriorityQueue<>(Collections.reverseOrder());

*Priority Queue �� �߰�
priorityQueue.add(1);     // priorityQueue �� 1 �߰�
priorityQueue.offer(3);   // priorityQueue �� 3 �߰�

Priority Queue �� ����
priorityQueue.poll();       // priorityQueue�� ù��° ���� ��ȯ�ϰ� ���� ����ִٸ� null
priorityQueue.remove();     // priorityQueue�� ù��° �� ����
priorityQueue.clear();      // priorityQueue�� �ʱ�ȭ

Priority Queue���� �켱������ ���� ���� �� ���
priorityQueue.peek();       // priorityQueue�� ù��° �� ���� = 1
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
