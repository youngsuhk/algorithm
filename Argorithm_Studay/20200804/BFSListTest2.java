import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

/*	
7	정점의 갯수
8	간선의 갯수
0 1	정점 사이의 간선 표현(무방향, 양방향)
0 2	
1 3
1 4
2 4
3 5
4 5
5 6	
*/

/*	
7
8
0 1
0 2	
1 3
1 4
2 4
3 5
4 5
5 6
	
*/
public class BFSListTest {
	static int N;
	static ArrayList<Integer>[] map;
	static boolean[] v;
	static int start = 0;
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
		int C = sc.nextInt();
		map = new ArrayList[N];
		v= new boolean[N];
		for(int i = 0 ; i < N; i++) {
			map[i] = new ArrayList<Integer>();
		}
		int from, to;
		for(int i =0; i < C; i++) {
			from = sc.nextInt();
			to = sc.nextInt();
			map[from].add(to);
			map[to].add(from);
		}
//		bfs();
		dfs(start);
		
	}
	private static void dfs(int cur) {
//		방문체크
		v[cur] = true;
//		todo
		System.out.println((char)(cur + 65));
		for(Integer idx  : map[cur]) {
			if(v[idx]) {
				continue;
			}
//			재귀호출
			dfs(idx);
		}
		
	}
	private static void bfs() {
		Queue<Integer> q = new LinkedList<Integer>();
		q.offer(start);
		boolean[] v = new boolean[N];
		v[start] = true;
		int cur;
		while(!q.isEmpty()) {
			cur = q.poll();
//			Todo 
			System.out.println((char)(cur + 65));
			for(Integer idx  : map[cur]) {
				if(v[idx]) {
					continue;
				}
				q.offer(idx);
				v[idx] = true;
			}
		}
	}
}













