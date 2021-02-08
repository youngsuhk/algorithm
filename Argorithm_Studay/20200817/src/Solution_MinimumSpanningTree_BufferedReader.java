
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

// ũ�罺Į �˰����̿�
/*
������ ������
�������� ������ ����ġ
5 10
0 1 5
0 2 10
0 3 8
0 4 7
1 2 5
1 3 3
1 4 6
2 3 1
2 4 3
3 4 1

==>10
----------------------------------

7 11
0 1 3
0 2 17
0 3 6
1 3 5
1 6 12
2 4 10
2 5 8
3 4 9
4 5 4
4 6 2
5 6 14

==>31

 */

public class Solution_MinimumSpanningTree_BufferedReader {

	static class Edge implements Comparable<Edge> {
		int start;
		int end;
		int weight;

		public Edge(int start, int end, int weight) {
			super();
			this.start = start;
			this.end = end;
			this.weight = weight;
		}

		@Override
		public String toString() {
			return "Edge [start=" + start + ", end=" + end + ", weight=" + weight + "]";
		}

		@Override
		public int compareTo(Edge o) {
			return this.weight - o.weight;
		}
	}

	static Edge[] edgeList;
	static int[] parents;
	static int V, E;

	public static void make() {
		for (int i = 0; i <= V; i++) {
			parents[i] = i;
		}
	}

	public static int find(int a) {
		if (parents[a] == a)
			return a;// �ڽ��� ��Ʈ�̸� �׳� �ڽ��� ��ȣ ����
		return parents[a] = find(parents[a]);
	}

	public static boolean union(int a, int b) {
		int aRoot = find(a);
		int bRoot = find(b);

		if (aRoot != bRoot) { // �� ����� root�� �ٸ��� ��ħ
			parents[bRoot] = aRoot;
			return true;
		}
		return false;
	}

	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine().trim());
		int tc = Integer.parseInt(st.nextToken());
		
		for (int t = 1; t <= tc; t++) {
			st = new StringTokenizer(br.readLine().trim());

			V = Integer.parseInt(st.nextToken());
			E = Integer.parseInt(st.nextToken());
			parents = new int[V+1];
			edgeList = new Edge[E];

			for (int i = 0; i < E; ++i) {
				st = new StringTokenizer(br.readLine().trim());
				int from = Integer.parseInt(st.nextToken());
				int to = Integer.parseInt(st.nextToken());
				int weight = Integer.parseInt(st.nextToken());

				edgeList[i] = new Edge(from, to, weight);

			} // ���� ����

			// ��������� ���� ������� ����
			Arrays.sort(edgeList);

			make();
			long result = 0;
			int count = 0;// ���� ������
			for (Edge edge : edgeList) {
				if (union(edge.start, edge.end)) { // ����Ŭ�� �߻����� �ʾ�����
					result += edge.weight;
					if (++count == V ) { // ���� �������� ������-1�̸� �� ������ ����.
						break;
					}
				}
			}
			System.out.println("#"+t+" "+result);
		}
	}
}// end class
