import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

/**
 * 2/4/�� : 10:15am ~ : union ����
 * 
 * ���� ������ ����鳢�� ¦����
 * input : ��ü�л��� n, m����
 * 
 * �迭 �ʱ�ȭ : �ڱ� index�� �ڱ� �ڽŰ���Ű��
 * find(x) : x�� parent�� ã�� ��ͷ� rootã�� 
 * union(x,y) : x�� y�� ���� ��������(find�� rootã��) Ȯ�� -> �ٸ��� root 
 * 
 *
 */

public class religion {
	static int n,m,i,j;
	static int[] rank;
	static int[] a;
	public static void main(String[] args)throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String str=br.readLine();
		StringTokenizer st=new StringTokenizer(str);
		
		n=Integer.parseInt(st.nextToken());
		m=Integer.parseInt(st.nextToken());
		a=new int[n+1];
		rank=new int[n+1];
		for (int k = 1; k <= n; k++) {//�迭 �ʱ�ȭ
			a[k]=k;
		}
		for (int k = 0; k < m; k++) {
			str = br.readLine();
            st = new StringTokenizer(str);
			i=Integer.parseInt(st.nextToken());
			j=Integer.parseInt(st.nextToken());
			union(i,j);
		}
		int cnt=0;
		for(int k=1;k<=n;k++) {
			if(k==a[k]) {
				cnt++;
			}
		}
		System.out.println(cnt);
	}
	public static int find(int x) {//root ã��
		if(x==a[x]) return x;
		a[x]=find(a[x]);
		return a[x];
	}
	public static void union(int i,int y) {//����
		int ii=find(i);
		int jj=find(j);
		if(rank[ii]<rank[jj]) {//���̰� �� ���� ���� �� �߰�.
			a[ii]=jj;
			rank[ii]++;
		}else {
			a[jj]=ii;
			rank[jj]++;
		}
	}
	

}
