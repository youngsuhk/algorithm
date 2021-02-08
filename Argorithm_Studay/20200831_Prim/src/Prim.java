import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Prim {
	 //��� ������ �����Ҷ� ������ cost�� �ּҰ� �ǰ� �ϴ� �ڵ�. 
	public static void main(String[] args) throws NumberFormatException, IOException {
		// TODO Auto-generated method stub
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		int N = Integer.parseInt(in.readLine().trim());
		int[][] input=new int [N][N];
		int []minEdge= new int[N];//��������� �ڽű��� ���� �ִܰŸ�
		boolean[] visited=new boolean[N];//ó���� ���� ���� ���� 
		
		for (int i = 0; i < N; i++) {
			StringTokenizer st=new StringTokenizer(in.readLine()," ");
			for (int j = 0; j < visited.length; j++) {
				input[i][j]=Integer.parseInt(st.nextToken());
			}
			minEdge[i]=Integer.MAX_VALUE;
		}//i��忡�� j�������� ����� ��� �迭�� ����
		
		int minVertex,min,result=0;
		//0�� ������ ������������ �Ѵٰ� ����

		 minEdge[0]=0;//������ �ּҰ�������� 0

		 for(int c=0;c<N;c++){
			 //����Ʈ���� ���Ե��� ���� ���� �� �ּҰ�������� ���� ã��
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

			 //���õ� �ּҺ�� ���� �������� ����Ʈ���� ���Ե��� ���� �ٸ� ������ ��� ����Ͽ� �ּҰ� ����

			 for(int i=0;i<N;i++){
				 if(!visited[i] && input[minVertex][i]!=0 && minEdge[i]>input[minVertex][i]){
					 minEdge[i]=input[minVertex][i];
				 }
			 }
		 }
		 System.out.println(result);
	}

}
