//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <string.h>
//#define SIZE 5
//
//typedef struct node {
//	int row;
//	int col;
//	int cnt_emp;
//	struct node *next[SIZE];
//	int nextsize;
//} Node;
//
//typedef struct kt_list {
//	Node *node[SIZE];
//	int size;
//} KT_Liset;
//
//int max_cnt = 63;
//int move_row[8] = { 1,1,2,2,-1,-1,-2,-2 };
//int move_col[8] = { 2,-2,1,-1,2,-2,1,-1};
//int board[SIZE][SIZE];
//int now_row;
//int now_col;
//int visit_cnt = 0;
//Node *graph;
//Node nodes[8][8];
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
//	for (dir = 0; dir < SIZE; dir++) {
//		if (empChecker(row + move_row[dir], col + move_col[dir]) == true)
//			cnt++;
//	}
//	return cnt;
//}
//
//int custom_cmp(const void *a, const void *b) {
//	return (*(Node**)a)->cnt_emp - (*(Node**)b)->cnt_emp;
//}
//
//KT_Liset getKT_Liset(Node *n) {//next point (8방향) 정보 저장
//	KT_Liset kt;
//	kt.size = 0;
//	for (int i = 0; i < n->nextsize; i++) {
//		if (empChecker(n->next[i]->row, n->next[i]->col) == true) {
//			n->next[i]->cnt_emp = countExit(n->next[i]->row, n->next[i]->col);
//			kt.node[kt.size] = n->next[i];
//			kt.size++;
//		}
//	}
//	qsort(kt.node, kt.size, sizeof(Node*), custom_cmp);
//	return kt;
//}
//
//bool backtrack_dfs(Node *n) {//backtrack, dfs
//	int i;
//	KT_Liset kt;
//	
//	if (visit_cnt >= max_cnt) { // 모든 노드를 다 방문 하면 종료
//		return true;
//	}
//	kt = getKT_Liset(n);
//
//	for (i = 0; i < kt.size; i++) {
//		visit_cnt++;
//		board[kt.node[i]->row][kt.node[i]->col] = visit_cnt;
//		/*for (int x = 0; x < SIZE; x++)
//		{
//		for (int y = 0; y < SIZE; y++)
//		printf("%d ", board[x][y]);
//		printf("\n");
//		}
//		printf("-------------------\n");*/
//		if (backtrack_dfs(kt.node[i]) == true) {
//			return true;
//		}
//		board[kt.node[i]->row][kt.node[i]->col] = -1;
//		visit_cnt--;
//	}
//	return false;
//}
//void makeGraph() {
//	int row, col, dir;
//	int temp_row, temp_col;
//	for (row = 0; row < SIZE; row++)
//		for (col = 0; col < SIZE; col++) {
//			// init a node
//			nodes[row][col].row = row;
//			nodes[row][col].col = col;
//			nodes[row][col].nextsize = 0;
//			// link nodes
//			for (dir = 0; dir < SIZE; dir++) {
//				temp_row = row + move_row[dir];
//				temp_col = col + move_col[dir];
//				if (empChecker(temp_row, temp_col) == true) {
//					nodes[row][col].next[nodes[row][col].nextsize] = &nodes[temp_row][temp_col];
//					nodes[row][col].nextsize++;
//				}
//			}
//		}
//	graph = &nodes[now_row][now_col];
//}
//int main(/*int argc, char *argv[]*/) {
//	char *file_name;
//	/*if (argc != 4) {
//		return false;
//	}
//	now_row = atoi(argv[1]);
//	now_col = atoi(argv[2]);
//	file_name = argv[3];*/
//	scanf("%d %d", &now_row, &now_col);
//	if (isChecker(now_row, now_col) == false) {
//		exit(1);
//	}
//	memset(board, -1, sizeof(board));//-1로 초기화
//	board[now_row][now_col] = 0;
//	makeGraph();
//	backtrack_dfs(graph);
//
//	/*FILE *f = fopen(file_name, "w");
//	for (int x = 0; x < SIZE; x++) {
//		for (int y = 0; y < SIZE; y++)
//			fprintf(f, "%-2d ", board[x][y]);
//		fprintf(f, "\n");
//	}
//	fclose(f);*/
//	for (int x = 0; x < SIZE; x++)
//	{
//		for (int y = 0; y < SIZE; y++)
//			printf("%-2d ", board[x][y]);
//		printf("\n");
//	}
//	
//	return 0;
//}