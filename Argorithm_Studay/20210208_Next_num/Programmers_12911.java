/**
 * 2/8/�� : 11:15am ~ : union ����
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
