package BFS_DFS;

public class WordConversion {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		String begin = "hit";
//		String target = "cog";
//		String[] words = { "hot", "dot", "dog", "lot", "log", "cog" };
		String begin = "kkkk";
		String target = "abcd";
		String[] words = { "kbkk", "xbkk", "xbkd", "ybke", "ybkd", "abkd", "abcd" };
		// String[] words = { "hot", "dot", "dog", "lot", "log" };
		// System.out.println(words[0].length());
		// System.out.println(begin.charAt(0));
		System.out.println(solution(begin, target, words));
		String[] word = { "hot", "dot", "dog", "lot", "log", "cog" };
		System.out.println(solution("hit", "cog", word));
		String[] word1 = { "hot", "dot", "dog", "lot", "log" };
		System.out.println(solution("hit", "cog", word1));
		String[] word2 = { "hot", "dot", "dog", "lot", "log" };
		System.out.println(solution("hit", "hot", word2));
		String[] word3 = { "1234567800", "1234567890", "1234567899" };
		System.out.println(solution("1234567000", "1234567899", word3));
		String[] word4 = { "cog", "log", "lot", "dog", "hot" };
		System.out.println(solution("hit", "cog", word4));
	}

	public static int solution(String begin, String target, String[] words) {
		int answer = 0;
		answer = dfs(begin, target, words, 0, 0);

		return answer;
	}

	public static int dfs(String begin, String target, String[] words, int index, int cnt) {

		if (begin.equals(target)) {
			return cnt;
		}
		int result = 0;
		for (int i = index; i < words.length; i++) {
			if (checkWords(begin, words[i]))
				result = dfs(words[i], target, words, i + 1, cnt + 1);

		}
		return result;
	}

	public static boolean checkWords(String begin, String target) {
		int cnt = 0;
		for (int j = 0; j < begin.length(); j++) {
			if (begin.charAt(j) != target.charAt(j)) {
				cnt++;
			}
		}
		if (cnt == 1)
			return true;
		else
			return false;
	}
}
