import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
 
 
public class Solution {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
         
 
        for(int i=1;i<=10;i++) {
            int T = sc.nextInt();
            Queue<Integer> q = new LinkedList<Integer>();
            int min= Integer.MAX_VALUE;
            for(int j=0;j<8;j++) {
                int x = sc.nextInt();
                if(x<min)min=x;
                q.offer(x);
            }
            min=min/30;
            boolean flag=true;
            for(int j=0;j<8;j++) {
                int x = q.poll();
                x=x-(min*30);
                if(x==0)flag=false;
                q.offer(x);
            }
             
            int m=-1;
            while(flag) {
                 
                int x=q.poll();
                if(x+m<=0) {
                     
                    q.offer(0);
                    break;
                }
                else {
                    x+=m;
                    q.offer(x);
                    m--;
                     
                    if(m<-5) {
                        m=-1;
                    }
                }
            }
            System.out.print("#"+i +" ");
            for(int j=0;j<8;j++) {
                 
                System.out.print(q.poll()+" ");
            }
            System.out.println();
        }
         
             
             
             
             
         
         
 
    }
 
}