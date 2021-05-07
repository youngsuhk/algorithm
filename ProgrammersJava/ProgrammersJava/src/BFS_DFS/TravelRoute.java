package BFS_DFS;

import java.util.*;

public class TravelRoute {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String[][] tickets = { { "ICN", "SFO" }, { "ICN", "ATL" }, { "SFO", "ATL" }, { "ATL", "ICN" },
				{ "ATL", "SFO" } };
		System.out.println(Arrays.toString(solution(tickets)));
	}

	static String[] result;

	public static String[] solution(String[][] tickets) {
		String[] answer = {};
		// 알파벳 순으로 출력되기 때문에 targets[][1]을 기준으로 sort
		Arrays.sort(tickets, new Comparator<String[]>() {
			@Override
			public int compare(final String[] entry1, final String[] entry2) {
				final String time1 = entry1[1];
				final String time2 = entry2[1];
				return time1.compareTo(time2);
			}
		});

		result = new String[tickets.length + 1];
		// 첫시작은 ICN으로 시작
		result[0] = "ICN";

		answer = dfs("ICN", tickets, 1, new boolean[tickets.length]);
		return answer;
	}

	public static String[] dfs(String start, String[][] tickets, int index, boolean[] visited) {
		if (index == tickets.length + 1) {
			return null;
		}

		for (int i = 0; i < tickets.length; i++) {
			// 방문하지 않은것들중 tickets의 출발부분이 start와 같은것 찾기
			if (!visited[i] && tickets[i][0].equals(start)) {
				// 방문 표시
				visited[i] = true;
				// 해당 도착 지점을 result에 넣기
				result[index] = tickets[i][1];
				// 도착지점을 출발지로 해서 다시 dfs 실행
				dfs(tickets[i][1], tickets, index + 1, visited);
				// visited[i] = false;

			}

		}

		return result;
	}

}