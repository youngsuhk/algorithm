package Heap;

import java.util.*;

public class DiskController {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[][] jobs = { { 0, 3 }, { 1, 9 }, { 2, 6 } };
		//System.out.println(jobs[0][0]);
		System.out.println(solution(jobs));
	}

	static class Job implements Comparable<Job>{
		int requestTime;
		int workingTime;

		public Job(int requestTime, int workingTime) {
			this.requestTime = requestTime;
			this.workingTime = workingTime;
		}
		@Override
	    public int compareTo(Job n)
	    {
	        if(n.requestTime != requestTime)
	            if(n.requestTime < requestTime)
	                return 1;
	            else
	                return -1;
	        else
	            if(n.workingTime < workingTime)
	                return 1;
	            else
	                return -1;
	    }	    
	}

	public static int solution(int[][] jobs) {
		int answer = 0;
		int cnt = 0;
		LinkedList<Job> list = new LinkedList<>();
		PriorityQueue<Job> pq = new PriorityQueue<>(new Comparator<Job>() {
    		@Override
    		public int compare(Job j1, Job j2) {
    			return j1.workingTime - j2.workingTime;
    		}
    	});
		for (int i = 0; i < jobs.length; i++) {
			list.add(new Job(jobs[i][0],jobs[i][1]));
		}
		Collections.sort(list);
		
		
    	int time = list.peek().requestTime;

    	while(cnt < jobs.length) {
    		while(!list.isEmpty() && list.peek().requestTime <= time) {
    			pq.offer(list.pollFirst());
    		}
    		
    		if(!pq.isEmpty()) {
    			Job job = pq.poll();
    			time += job.workingTime;
    			answer += time - job.requestTime;
    			cnt++;
    		} else {
    			time++;
    		}
    	}
    	return answer / cnt;
    }
}
