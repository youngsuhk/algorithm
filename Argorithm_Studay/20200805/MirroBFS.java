import java.util.LinkedList;
import java.util.Queue;

import javax.xml.crypto.Data;

public class MirroBFS {
	static int[][] map;
	static int N = 8;
	public static void main(String[] args) {
//		상,하, 좌, 우, - BFS
//		도착하면 도착할 때 까지의 이동횟수, 못하면 -1 출력
//		0 이면 길, 1이면 벽
		map = new int[][]{
				{0,0,1,1,1,1,1,1},
				{1,0,0,0,0,0,0,1},
				{1,1,1,0,1,1,1,1},
				{1,1,1,0,1,1,1,1},
				{1,0,0,0,0,0,0,1},
				{1,0,1,0,1,1,1,1},
				{1,0,0,0,0,0,0,1},
				{1,1,1,1,1,1,1,0}
			};
			int result = bfs();
			System.out.println(result);
			
//			System.out.println(new Data(1,2));
		

	}
//	static void dfs(int x, int y, int cnt, int sum, int flag) {
//		
//	}
	static int[] dx = {0,0,-1,1}; //상,하,좌,우
	static int[] dy = {-1,1,0,0};
	static int bfs() {
		Queue<Data> q = new LinkedList<>();
//		첫번째 접근 객체를 생성해서 큐에 삽입
		q.offer(new Data(0,0,0));
//		방문 체크
		boolean[][] v = new boolean[N][N];
		v[0][0] = true;
//		Data d = new Data(0,0);
//		q.offer(d);
		
//		큐가 빌 때까지 전체 작업 진행
		Data cur;
		int nx, ny;
		while(!q.isEmpty()) {
			cur = q.poll();
//			목적지에 도착하면 더이상 작업 안함
			if(cur.x == N-1 && cur.y == N-1) {
				
				return cur.cnt;
			}
//			4방위로 가보기
			for(int d = 0; d < 4; d++) {
//				새로운 좌표 구하기
				nx = cur.x + dx[d];
				ny = cur.y + dy[d];
//				범위 체크
				if(nx < 0 || nx >= N || ny < 0 || ny >= N) {
					continue;
				}
//				방문한 좌표  안가기
				if(v[ny][nx] ) {
					continue;
				}
//				벽이면 안가기
				if(map[ny][nx] == 1) {
					continue;
				}
//				새로운 좌표 큐에 삽입
				q.offer(new Data(ny, nx, cur.cnt + 1));
//				방문체크
				v[ny][nx] = true;
			}
		}
		return -1;
	}
	
	static class Data{
		int x;
		int y;
		int cnt;
		public Data(int y, int x, int cnt) {
			this.x = x;
			this.y = y;
			this.cnt = cnt;
		}
		@Override
		public String toString() {
			return "Data [x=" + x + ", y=" + y + ", cnt=" + cnt + "]";
		}
		
		
		
	}


}
















