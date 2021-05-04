package BFS_DFS;

import java.util.Arrays;

public class Network {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n = 3;
		int[][] computers = { { 1, 0, 0 }, { 0, 1, 0 }, { 0, 0, 1 } };

		System.out.println(solution(n, computers));
	}

	static int[] root;
	static int[] rank;

	public static int solution(int n, int[][] computers) {
		int answer = 1;
		root = new int[n];
		rank = new int[n];

		for (int i = 0; i < n; i++) {
			root[i] = i;
		}
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (computers[i][j] == 1)
					union(i, j);
			}
		}
		Arrays.sort(root);
		for (int i = 1; i < n; i++) {
			if (root[i - 1] != root[i])
				answer++;
		}
		return answer;
	}

	public static int find(int x) {
		if (root[x] == x) {
			return x;
		} else {
			return find(root[x]);
		}
	}

	public static void union(int x, int y) {
		x = find(x);
		y = find(y);

		// �� ���� root�� ������(�̹� ���� Ʈ��) ��ġ�� �ʴ´�.
		// "union-by-rank ����ȭ"
		// �׻� ���̰� �� ���� Ʈ���� ���̰� ���� Ʈ�� �ؿ� �ִ´�. ��, ���̰� �� ���� ���� root�� ����
		if (rank[x] < rank[y]) {
			root[x] = y; // x�� root�� y�� ����
		} else {
			root[y] = x; // y�� root�� x�� ����

			if (rank[x] == rank[y])
				rank[x]++; // ���� ���̰� ���ٸ� ��ģ �� (x�� ���� + 1)
		}
	}

}
