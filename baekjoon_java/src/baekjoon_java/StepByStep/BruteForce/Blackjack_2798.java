package baekjoon_java.StepByStep.BruteForce;

import java.util.Scanner;

public class Blackjack_2798 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N, M;
		N = sc.nextInt();
		M = sc.nextInt();
		int card[] = new int[N];
		for (int i = 0; i < N; i++) {
			card[i] = sc.nextInt();
		}
		sc.close();
		int result = search(card, N, M);
		System.out.println(result);
		
	}
	static int search(int[] card, int N, int M) {
		int result = 0;
 
		// 3���� ���� ������ ù��° ī��� N - 2 ������ ��ȸ
		for (int i = 0; i < N - 2; i++) {
			
			// ī�尡 M ���� ũ�� skip
			if(card[i] > M) continue;
			
			// �� ��° ī��� ù ��° ī�� �������� N - 1 ������ ��ȸ
			for (int j = i + 1; j < N - 1; j++) {
 
				// �� ��° ī��� ù ��° ī���� ���� M���� ũ�� skip
				if(card[i] + card[j] > M) continue;
				
				// �� ��° ī��� �� ��° ī�� �������� N ���� ��ȸ
				for (int k = j + 1; k < N; k++) {
					
					// 3�� ī���� �� ���� temp
					int temp = card[i] + card[j] + card[k];
					
					// M�� �� ī���� ���� ���ٸ� temp return �� ���� 
					if (M == temp) {	
						return temp;
					}
					
					// �� ī���� ���� ���� �պ��� ũ�鼭 M ���� ���� ��� result ���� 
					if(result < temp && temp < M) {
						result = temp;
					}
				}
			}
		}
		
		// ��� ��ȸ�� ��ġ�� result ���� 
		return result;
	}

}
