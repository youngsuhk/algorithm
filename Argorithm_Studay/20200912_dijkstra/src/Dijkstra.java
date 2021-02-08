import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Dijkstra {
	public static void main(String[] args) /*throws NumberFormatException, IOException*/ {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int V = Integer.parseInt(in.readLine());
		int start=0;
		int end=V-1;
		final int INFINITY=Integer.MAX_VALUE;
		char arr[];
		String st="abCDe";
		arr=st.toCharArray();
		System.out.println(st);
		System.out.println(arr);
		System.out.println(arr.length);
		int[][] matrix=new int [V][V];
		int []distance= new int[V];//출발지에서 자신까지 오는 최단거리
		boolean[] visited=new boolean[V];//처리한 정점 여부 관리 
		
		for (int i = 0; i < V; i++) {
			StringTokenizer st=new StringTokenizer(in.readLine()," ");
			for (int j = 0; j < visited.length; j++) {
				matrix[i][j]=Integer.parseInt(st.nextToken());
			}
		}
		Arrays.fill(distance,INFINITY); //arr를 INFINITY로 초기화
		distance[start]=0;//시작지점 cost 0설정
		
		int min=0,current=0;
		for(int i=0;i<V;i++) {
			
			min=INFINITY;
			//1단계 : 방문하지 않은 정점들 중 출발지에서 자신까지 오는 비용이 최단인 정점을 고려할 경유지로 선택
			for (int j = 0; j < V; j++) {
				if(!visited[j] && min>distance[j]) {
					 min=distance[j];
					 current=j;
				}
			}
		
			visited[current]=true;
			if(current==end)break;
			//2단계 : 선택된 current 정점을 경유지로 해서 아직 방문하지 않은 다른 정점으로 최단거리 비용 계산하여 유리하면 update
			for (int j = 0; j < V; j++) {
				//min==> distance[current]
				if(!visited[j]&& matrix[current][j]!=0 && distance[j]>min+matrix[current][j]) {
					distance[j]=min+matrix[current][j];
				}
			}
		}
		System.out.println(distance[end]);
		
	}
	public void dijkstra(int s,int A[][],int D) {
		
	}
}
