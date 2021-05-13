package Kakao2021;

import java.util.Arrays;

public class problem2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String[][] places = { 
				{ 
					"POOOP", 
					"OXXOX", 
					"OPXPX", 
					"OOXOX", 
					"POXXP" },
				{ "POOPX", "OXPXP", "PXXXO", "OXXXO", "OOOPP" }, 
				{ "PXOPX", "OXOXP", "OXPXX", "OXXXP", "POOXX" },
				{ 
					"OOOXX", 
					"OPOOX", 
					"PXOXX", 
					"OXOOX", 
					"OOOOP" }, 
				{ 
					"PXPXP", 
					"XPXPX", 
					"PXPXP", 
					"XPXPX", 
					"PXOXP" } };
		System.out.println(Arrays.toString(solution(places)));
	}

	public static int[] solution(String[][] places) {
		int[] answer = new int[5];
		String[] map = new String[5];
		String[] s_map = new String[5];
		for (int i = 0; i < map.length; i++) {
			for (int j = 0; j < map.length; j++) {
				map[i] = places[i][j];

				answer[i] = sol(places[i]);
			}
		}

		return answer;
	}

	public static int sol(String[] map) {
		for (int i = 0; i < map.length; i++) {
			for (int j = 0; j < map.length; j++) {

				if (i == map.length - 1 && j == map.length - 1) {
					return 1;
				}
				// map[4][]일때
				if (i == map.length - 1 && j < map.length - 1) {
					if (map[i].charAt(j) == 'P') {
						if (map[i].charAt(j + 1) == 'P') {
							return 0;
						}
					}
				}
				// map[][4]일때
				if (j == map.length - 1 && i < map.length - 1) {
					if (map[i].charAt(j) == 'P') {
						if (map[i + 1].charAt(j) == 'P') {
							return 0;
						}
					}
				}
				//POP의 경우
				if (i < map.length - 2 && j < map.length - 2) {
					if (map[i].charAt(j) == 'P') {
						if (map[i + 2].charAt(j) == 'P') {
							if(map[i+1].charAt(j)=='O') {
								return 0;
							}
									
						}
						if (map[i].charAt(j + 2) == 'P') {
							if(map[i].charAt(j+1)=='O') {
								return 0;
							}
						}
					}
				}
				if ( (3<=i &&i<=4) && (0<=j&&j <= 2)) {
					if (map[i].charAt(j) == 'P') {
						if (map[i].charAt(j+2) == 'P') {
							if(map[i].charAt(j+1)=='O') {
								return 0;
							}
						}
					}
				}
				if ((0<=i&&i <= 2)  && (3<=j &&j<=4)) {
					if (map[i].charAt(j) == 'P') {
						if (map[i+2].charAt(j) == 'P') {
							if(map[i+1].charAt(j)=='O') {
								return 0;
							}
						}
					}
				}
				// map[4이하][4이하]일떄
				if (i < map.length - 1 && j < map.length - 1) {
					if (map[i].charAt(j) == 'P') {
						if (map[i + 1].charAt(j) == 'P') {
							return 0;
						}
						if (map[i].charAt(j + 1) == 'P') {
							return 0;
						}
						if (map[i + 1].charAt(j + 1) == 'P') {
							if (map[i + 1].charAt(j) == 'O' || map[i].charAt(j + 1) == 'O') {
								return 0;
							}
						}
					}
				}
				if(1<=i&&j<4) {
					if (map[i].charAt(j) == 'P') {
						if(map[i-1].charAt(j+1)=='P') {
							if(map[i-1].charAt(j)=='O')
								return 0;
						}
						if(map[i-1].charAt(j+1)=='P') {
							if(map[i].charAt(j+1)=='O')
								return 0;
						}
					}
				}
			}
		}
		return 1;
	}
}
