/**
 * 2/8/월 : 11:15am ~ : union 문제
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
public class Programmers_12911 {
	public static void main(String[] args) {
		// TODO Auto-generated constructor stub
		int n=15;
		String a2 = Integer.toBinaryString(n);
		System.out.println(a2);
		System.out.println(a2.charAt(2));
	    int i=0,j = 0,cnt=0;
	    
	    for(i=a2.length()-1;i>=0;i--){
	    	if(a2.charAt(i)=='1'){
	    		for(j=i-1;j>=0;j--){
	    			if(a2.charAt(j)!='1'){
	    				break;
	                }
	                cnt++;
	            }
	            break;
	        }
	    }
	    
	    //System.out.println(new_a3);
	    int answer;
	    if(j<0) {
       	    StringBuilder new_a2=new StringBuilder('0'+a2);
	    	j++;
	    	new_a2.setCharAt(j,'1');
		    int cnt2=0;
		    for(int k=a2.length();k>j;k--){
		        if(cnt2<cnt)new_a2.setCharAt(k,'1');
		        else new_a2.setCharAt(k,'0');
		        cnt2++;
		    }
		     answer=Integer.parseInt(new_a2.toString(),2);
		     
	    }
        else{
            StringBuilder new_a2=new StringBuilder(a2);
	        new_a2.setCharAt(j,'1');
	        int cnt2=0;
	        for(int k=a2.length()-1;k>j;k--){
	            if(cnt2<cnt)new_a2.setCharAt(k,'1');
	            else new_a2.setCharAt(k,'0');
	            cnt2++;
	        }
             answer=Integer.parseInt(new_a2.toString(),2);
        }
	    System.out.println(answer);
	}
}
