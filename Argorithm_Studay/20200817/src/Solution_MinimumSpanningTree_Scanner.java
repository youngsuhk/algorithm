import java.util.Arrays;
import java.util.Scanner;

//KruskalArgorithm
public class Solution_MinimumSpanningTree_Scanner {
	static class Edge implements Comparable<Edge>{
		int start;
		int end;
		int weight;

		public Edge(int start, int end, int weight) {
			super();
			this.start = start;
			this.end = end;
			this.weight = weight;
		}

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
			return a;// 자신이 root 이면 그냥 자신의 번호 리턴
		return parents[a] = find(parents[a]);
	}

	public static boolean union(int a, int b) {
		int aRoot = find(a);
		int bRoot = find(b);

		if (aRoot != bRoot) { // 두 노드의 root가 다르면 합침
			parents[bRoot] = aRoot;
			return true;
		}
		return false;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();

 		for (int t = 1; t <= tc; t++) {
			V = sc.nextInt();
			E = sc.nextInt();
			parents = new int[V+1];
			edgeList = new Edge[E];
			
			int to, from, weight = 0;
			for (int e = 0; e < E; e++) {
				to = sc.nextInt();
				from = sc.nextInt();
				weight = sc.nextInt();
				
				edgeList[e]=new Edge(from,to,weight);
			}
			Arrays.sort(edgeList);
			
			make();
			long result=0;
			int count=0;
			for (Edge edge : edgeList) {
				if (union(edge.start, edge.end)) { // 싸이클이 발생하지 않았으면
					result += edge.weight;
					if (++count == V ) { // 연결 간선수가 정점수-1이면 다 연결한 것임.
						break;
					}
				}
			}
			System.out.println("#"+t+" "+result);
		}
	}
}
