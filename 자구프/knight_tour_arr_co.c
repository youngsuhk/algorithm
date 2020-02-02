//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <string.h>
//#define SIZE 8
//
//typedef struct pos {
//	int row;
//	int col;
//	int cnt_emp;
//} Pos;
//
//typedef struct kt_list {
//	Pos pos[SIZE];
//	int size;
//} KT_Liset;
//
//int max_cnt = 63;
//int move_row[8] = { 1,1,2,2,-1,-1,-2,-2 };
//int move_col[8] = { 2,-2,1,-1,2,-2,1,-1 };
//int board[8][8];
//int now_row;
//int now_col;
//int visit_cnt = 0;
//
//bool isChecker(int row, int col) {//board range check
//	if (row < 0 || col < 0 || row >= SIZE || col >= SIZE)
//		return false;
//	return true;
//}
//
//bool empChecker(int row, int col) {//empty check
//	if (isChecker(row, col) == true) {
//		if (board[row][col] == -1)
//			return true;
//	}
//	return false;
//}
//
//int countExit(int row, int col) {//next point 의 8 방향으로 갈 곳 의 갯수 확인
//	int cnt = 0;
//	int dir;
//	if (board[row][col] != -1)
//		return 0;
//
//	
//	for (dir = 0; dir < SIZE; dir++) {
//		if (empChecker(row + move_row[dir], col + move_col[dir]) == true)
//			cnt++;
//	}
//	return cnt;
//}
//
//int custom_cmp(const void *a, const void *b) {
//	return ((Pos*)a)->cnt_emp - ((Pos*)b)->cnt_emp;
//}
//
//KT_Liset getKT_Liset(int row, int col) {//next point (8방향) 정보 저장
//	KT_Liset kt;
//	int dir, temp_row, temp_col;
//	kt.size = 0;
//	for (dir = 0; dir < SIZE; dir++) {
//		temp_row = row + move_row[dir];
//		temp_col = col + move_col[dir];
//		if (empChecker(temp_row, temp_col) == true) {
//			kt.pos[kt.size].row = temp_row;
//			kt.pos[kt.size].col = temp_col;
//			kt.pos[kt.size].cnt_emp = countExit(temp_row, temp_col);
//			kt.size++;
//		}
//	}
//	qsort(kt.pos, kt.size, sizeof(Pos), custom_cmp);
//	return kt;
//}
//
//bool backtrack_dfs(int row, int col) {//backtrack, dfs
//	int i;
//	KT_Liset kt;
//	if (visit_cnt >= max_cnt) { // 모든 노드를 다 방문 하면 종료
//		return true;
//	}
//	kt = getKT_Liset(row, col);
//	for (i = 0; i < kt.size; i++) {
//		visit_cnt++;
//		board[kt.pos[i].row][kt.pos[i].col] = visit_cnt;
//		/*for (int x = 0; x < SIZE; x++)
//		{
//			for (int y = 0; y < SIZE; y++)
//				printf("%d ", board[x][y]);
//			printf("\n");
//		}
//		printf("-------------------\n");*/
//		if (backtrack_dfs(kt.pos[i].row, kt.pos[i].col) == true) {
//			return true;
//		}
//		board[kt.pos[i].row][kt.pos[i].col] = -1;
//		visit_cnt--;
//	}
//	return false;
//}
//
//int main(int argc, char *argv[]) {
//	char *file_name;
//	if (argc != 4) {
//		return false;
//	}
//	now_row = atoi(argv[1]);
//	now_col = atoi(argv[2]);
//	file_name = argv[3];
//	//scanf("%d %d", &now_row, &now_col);
//	if (isChecker(now_row, now_col) == false) {
//		exit(1);
//	}
//	memset(board, -1, sizeof(board));//-1로 초기화
//	board[now_row][now_col] = 0;
//
//	backtrack_dfs(now_row, now_col);
//
//	FILE *f = fopen(file_name, "w");
//	for (int x = 0; x < SIZE; x++){
//		for (int y = 0; y < SIZE; y++)
//			fprintf(f, "%-2d ", board[x][y]);
//		fprintf(f, "\n");
//	}
//
//	/*for (int x = 0; x < SIZE; x++)
//	{
//		for (int y = 0; y < SIZE; y++)
//			printf("%-2d ", board[x][y]);
//		printf("\n");
//	}*/
//	fclose(f);
//	return 0;
//}