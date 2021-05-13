package Kakao2021;

import java.util.stream.IntStream;

public class problem4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n = 4;
		int start = 1;
		int end = 4;
		int[][] roads = { { 1, 2, 1 }, { 3, 2, 1 }, { 2, 4, 1 } };
		int[] traps = { 2, 3 };
		System.out.println(solution(n, start, end, roads, traps));
	}

	public static int solution(int n, int start, int end, int[][] roads, int[] traps) {
		int answer = 0;

		answer=dfs(n, start, end, roads, traps, 0, new boolean[n+1]);
		return answer;
	}

	public static int dfs(int n, int start, int end, int[][] roads, int[] traps, int sum, boolean[] visited) {
		// 종료조건
		if (start == end) {
			return sum;
		}
		trapsCk(start, roads, traps);
		for (int i = 0; i < roads.length; i++) {
			// i에 방문했는지 체크 + start체크
			if (!visited[i] && roads[i][0] == start) {
				sum += roads[i][2];
				
				if (IntStream.of(traps).anyMatch(x -> x == start)&&IntStream.of(traps).anyMatch(x -> x == roads[0][0])) {
					visited[i]=true;
				}
				dfs(n, roads[i][1], end, roads, traps, sum, visited);
				visited[i]=false;
			}
		}

		return sum;
	}

	public static void trapsCk(int start, int[][] roads, int[] traps) {
		if (IntStream.of(traps).anyMatch(x -> x == start)) {
			for (int j = 0; j < roads.length; j++) {
				if (IntStream.of(traps).anyMatch(x -> x == start)) {
					int temp = roads[j][0];
					roads[j][0] = roads[j][1];
					roads[j][1] = temp;
				}
			}
		}
	}

}
