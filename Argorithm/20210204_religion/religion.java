import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

/**
 * 2/4/목 : 10:15am ~ : union 문제
 * 
 * 같은 종교인 사람들끼리 짝짓기
 * input : 전체학생수 n, m라인
 * 
 * 배열 초기화 : 자기 index에 자기 자신가리키기
 * find(x) : x의 parent를 찾아 재귀로 root찾기 
 * union(x,y) : x와 y가 같은 집합인지(find로 root찾기) 확인 -> 다르면 root 
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
		for (int k = 1; k <= n; k++) {//배열 초기화
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
	public static int find(int x) {//root 찾기
		if(x==a[x]) return x;
		a[x]=find(a[x]);
		return a[x];
	}
	public static void union(int i,int y) {//병합
		int ii=find(i);
		int jj=find(j);
		if(rank[ii]<rank[jj]) {//깊이가 더 얕은 집합 에 추가.
			a[ii]=jj;
			rank[ii]++;
		}else {
			a[jj]=ii;
			rank[jj]++;
		}
	}
	

}
