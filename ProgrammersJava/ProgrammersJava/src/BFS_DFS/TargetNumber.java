package BFS_DFS;

import java.util.ArrayList;
import java.util.List;

public class TargetNumber {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] number = { 1, 1, 1, 1, 1 };
		int target = 3;
		Integer a;
		System.out.println(solution(number, target));
		List<String> c = new ArrayList<String>();
	}

	public static int solution(int[] numbers, int target) {
		int answer = 0;
		answer = dfs(numbers, target, numbers[0], 1) + dfs(numbers, target, -numbers[0], 1);

		return answer;
	}

	public static int dfs(int[] numbers, int target, int sum, int i) {

		if (i == numbers.length) {
			if (sum == target) {
				return 1;
			} else {
				return 0;
			}
		}

		int result = 0;
		result += dfs(numbers, target, sum + numbers[i], i + 1);
		result += dfs(numbers, target, sum - numbers[i], i + 1);
		return result;
	}
}
