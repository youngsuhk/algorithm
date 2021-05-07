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
		// ���ĺ� ������ ��µǱ� ������ targets[][1]�� �������� sort
		Arrays.sort(tickets, new Comparator<String[]>() {
			@Override
			public int compare(final String[] entry1, final String[] entry2) {
				final String time1 = entry1[1];
				final String time2 = entry2[1];
				return time1.compareTo(time2);
			}
		});

		result = new String[tickets.length + 1];
		// ù������ ICN���� ����
		result[0] = "ICN";

		answer = dfs("ICN", tickets, 1, new boolean[tickets.length]);
		return answer;
	}

	public static String[] dfs(String start, String[][] tickets, int index, boolean[] visited) {
		if (index == tickets.length + 1) {
			return null;
		}

		for (int i = 0; i < tickets.length; i++) {
			// �湮���� �����͵��� tickets�� ��ߺκ��� start�� ������ ã��
			if (!visited[i] && tickets[i][0].equals(start)) {
				// �湮 ǥ��
				visited[i] = true;
				// �ش� ���� ������ result�� �ֱ�
				result[index] = tickets[i][1];
				// ���������� ������� �ؼ� �ٽ� dfs ����
				dfs(tickets[i][1], tickets, index + 1, visited);
				// visited[i] = false;

			}

		}

		return result;
	}

}