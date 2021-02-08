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
		int []distance= new int[V];//��������� �ڽű��� ���� �ִܰŸ�
		boolean[] visited=new boolean[V];//ó���� ���� ���� ���� 
		
		for (int i = 0; i < V; i++) {
			StringTokenizer st=new StringTokenizer(in.readLine()," ");
			for (int j = 0; j < visited.length; j++) {
				matrix[i][j]=Integer.parseInt(st.nextToken());
			}
		}
		Arrays.fill(distance,INFINITY); //arr�� INFINITY�� �ʱ�ȭ
		distance[start]=0;//�������� cost 0����
		
		int min=0,current=0;
		for(int i=0;i<V;i++) {
			
			min=INFINITY;
			//1�ܰ� : �湮���� ���� ������ �� ��������� �ڽű��� ���� ����� �ִ��� ������ ����� �������� ����
			for (int j = 0; j < V; j++) {
				if(!visited[j] && min>distance[j]) {
					 min=distance[j];
					 current=j;
				}
			}
		
			visited[current]=true;
			if(current==end)break;
			//2�ܰ� : ���õ� current ������ �������� �ؼ� ���� �湮���� ���� �ٸ� �������� �ִܰŸ� ��� ����Ͽ� �����ϸ� update
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
