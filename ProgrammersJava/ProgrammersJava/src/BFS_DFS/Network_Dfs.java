package BFS_DFS;

public class Network_Dfs {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n = 6;
		// int[][] computers={{1}};
		// int[][] computers = { { 1, 1, 0, 1, 0 }, { 1, 1, 0, 0, 0 }, { 0, 0, 1, 0, 1
		// }, { 1, 0, 0, 1, 0 }, { 0, 0, 1, 0, 1 } };
		// int[][] computers= {{1,0,1},{0,1,0},{1,0,1}};
		int[][] computers = { { 1, 0, 1, 0, 0, 1 }, { 0, 1, 0, 1, 0, 0 }, { 1, 0, 1, 0, 0, 0 }, { 0, 1, 0, 1, 1, 0 },
				{ 0, 0, 0, 1, 1, 1 }, { 1, 0, 0, 0, 1, 1 } };
		int[][] computers1 = { { 1, 1, 1, 1 }, { 1, 1, 1, 1 }, { 1, 1, 1, 1 }, { 1, 1, 1, 1 } };
		int[][] computers2 = { { 1, 0, 0, 1 }, { 0, 1, 0, 0 }, { 0, 0, 1, 0 }, { 1, 0, 0, 1 } };
		System.out.println(solution(n, computers));
	}
	public static int solution(int n, int[][] computers) {
        int answer = 0;
        boolean[] chk = new boolean[n];
        for(int i = 0; i < n; i++) {
            if(!chk[i]) {
                dfs(computers, chk, i);
                answer++;
            }
        }
        return answer;
    }
    public static void dfs(int[][] computers, boolean[] chk, int start) {
        chk[start] = true;
        for(int i = 0; i < computers.length; i++) {
            if(computers[start][i] == 1 && !chk[i]) {
                dfs(computers, chk, i);
            }
        }
    }
}
