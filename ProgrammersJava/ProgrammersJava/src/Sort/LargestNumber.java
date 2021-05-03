package Sort;

import java.util.Arrays;
import java.util.*;

public class LargestNumber {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int []number= {6,10,2};
		
		int []temp= {0,3,30,34,5,9,1000,999};
		
		//System.out.println(Arrays.toString(temp));
		//String temp=Integer.toString(num);
		//System.out.println(temp.charAt(1));
		System.out.println(solution(temp));
	}
	 public static String solution(int[] numbers) {
	        String answer = "";
	        String []temp=new String[numbers.length];
	        for (int i = 0; i < temp.length; i++) {
				temp[i]=Integer.toString(numbers[i]);
			}
	        Arrays.sort(temp,new Comparator<String>() {
	            @Override
	            public int compare(String a, String b) {
	            	System.out.println(b+a);
	            	System.out.println(a+b);
	                return (b+a).compareTo(a+b);
	                //오름차순 정렬 (o2+o1작은것).compareTo(o1+o2큰것);
	            }
	        });
	        //number ={0,0,0}일경우 결과가 000이나오면 안됨
            if (temp[0].equals("0")) return "0";

	        for (int i = 0; i < temp.length; i++) {
				answer=answer+temp[i];
			}
	        return answer;
	    }
}
