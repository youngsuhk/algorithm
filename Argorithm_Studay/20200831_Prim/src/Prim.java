import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Prim {
	 //모든 정점을 연결할때 간선의 cost가 최소가 되게 하는 코드. 
	public static void main(String[] args) throws NumberFormatException, IOException {
		// TODO Auto-generated method stub
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(in.readLine().trim());
		int[][] input=new int [N][N];
		int []minEdge= new int[N];//출발지에서 자신까지 오는 최단거리
		boolean[] visited=new boolean[N];//처리한 정점 여부 관리 
		
		for (int i = 0; i < N; i++) {
			StringTokenizer st=new StringTokenizer(in.readLine()," ");
			for (int j = 0; j < visited.length; j++) {
				input[i][j]=Integer.parseInt(st.nextToken());
			}
			minEdge[i]=Integer.MAX_VALUE;
		}//i노드에서 j노드까지의 비용을 모두 배열에 저장
		
		int minVertex,min,result=0;
		//0번 정점을 시작정점으로 한다고 가정

		 minEdge[0]=0;//시작점 최소간선비용은 0

		 for(int c=0;c<N;c++){
			 //신자트리에 포함되지 않은 정점 중 최소간선비용의 정점 찾기
			 min = Integer.MAX_VALUE;
			 minVertex=0;
			 
			 for(int i=0;i<N;i++){
				 if(!visited[i]&&min> minEdge[i]){// 
					 min=minEdge[i];
					 minVertex=i; 
				 }
			 }
			 	 
			 result +=min;
			 visited[minVertex]=true;

			 //선택된 최소비용 정점 기준으로 신장트리에 포함되지 않은 다른 정점의 비용 계산하여 최소값 갱신

			 for(int i=0;i<N;i++){
				 if(!visited[i] && input[minVertex][i]!=0 && minEdge[i]>input[minVertex][i]){
					 minEdge[i]=input[minVertex][i];
				 }
			 }
		 }
		 System.out.println(result);
	}

}
