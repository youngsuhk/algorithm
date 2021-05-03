package Sort;

import java.util.Arrays;

public class KthNumber {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [] arr= {1,5,2,6,3,7,4};
		int [][]commands= {{2,5,3},{4,4,1},{1,7,3}};
		System.out.println(Arrays.toString(solution(arr,commands)));
	}
	
	public static int[] solution(int[] array, int[][] commands) {
        int[] answer = new int[commands.length];
        for(int i=0;i<commands.length;i++){
            int cnt=0;
            int []temp=new int[commands[i][1]-commands[i][0]+1];
            for(int j=commands[i][0]-1;j<=commands[i][1]-1;j++){
                temp[cnt++]=array[j];
            }
            Arrays.sort(temp);
            answer[i]=temp[commands[i][2]-1];
        }
        return answer;
    }

}
