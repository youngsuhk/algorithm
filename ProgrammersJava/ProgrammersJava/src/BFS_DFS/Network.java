package BFS_DFS;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

public class Network {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n = 6;
		
		int[][] computers = { { 1, 0, 1, 0, 0, 1 }, { 0, 1, 0, 1, 0, 0 }, { 1, 0, 1, 0, 0, 0 }, { 0, 1, 0, 1, 1, 0 },
				{ 0, 0, 0, 1, 1, 0 }, { 1, 0, 0, 0, 0, 1 } };
		int[][] computers1 = { { 1, 1, 1, 1 }, { 1, 1, 1, 1 }, { 1, 1, 1, 1 }, { 1, 1, 1, 1 } };
		int[][] computers2 = { { 1, 0, 0, 1 }, { 0, 1, 0, 0 }, { 0, 0, 1, 0 }, { 1, 0, 0, 1 } };
		System.out.println(solution(n, computers));
	}

	static int[] root;
	static int[] rank;

	public static int solution(int n, int[][] computers) {
		int answer = 1;
		root = new int[n];
		rank = new int[n];
		Set<Integer> set = new HashSet<>();
		for (int i = 0; i < n; i++) {
			root[i] = i;
		}
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (computers[i][j] == 1)
					union(i, j);
			}
		}
		for (int i = 0; i < n; i++) {
			find(i);
		}
		System.out.println(Arrays.toString(root));
		for (int loop : root) {
			set.add(loop);
		}
		answer = set.size();
		return answer;
	}

	public static int find(int x) {
		if (root[x] == x) {
			return x;
		} else {
			return root[x] = find(root[x]);
		}
	}

	public static void union(int x, int y) {
		x = find(x);
		y = find(y);

		// 두 값의 root가 같으면(이미 같은 트리) 합치지 않는다.
		// "union-by-rank 최적화"
		// 항상 높이가 더 낮은 트리를 높이가 높은 트리 밑에 넣는다. 즉, 높이가 더 높은 쪽을 root로 삼음
		if (rank[x] < rank[y]) {
			root[x] = y; // x의 root를 y로 변경
		} else {
			root[y] = x; // y의 root를 x로 변경

			if (rank[x] == rank[y])
				rank[x]++; // 만약 높이가 같다면 합친 후 (x의 높이 + 1)
		}
	}

}
