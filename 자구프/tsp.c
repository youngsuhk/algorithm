//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//
//#define MAX_NUM 9000
//
//typedef struct {
//	int level;
//	int *path;
//	double bound;
//}Node;
//
//int adj[31][31];
//
//Node *PQ = NULL;
//int pq_num = 0;
//int pq_maxsize = 5;
//
//void enque(Node node) {
//	int i;
//	Node temp;
//
//	if (PQ == NULL)
//		PQ = (Node*)malloc(sizeof(Node)*pq_maxsize);
//	if (pq_num + 1 == pq_maxsize) {
//		PQ = (Node*)realloc(PQ, sizeof(Node)*pq_maxsize * 2);
//		pq_maxsize *= 2;
//	}
//
//	temp = node;
//	i = ++pq_num;
//	while (i > 1) {
//		if (temp.bound < PQ[i / 2].bound) {
//			PQ[i] = PQ[i / 2];
//			i /= 2;
//		}
//		else
//			break;
//	}
//	PQ[i] = node;
//}
//
//Node deque(void) {
//	Node result = PQ[1];
//	int i;
//	Node temp;
//
//	temp = PQ[pq_num--];
//	i = 1;
//
//	while (2 * i <= pq_num) {
//		if (PQ[2 * i].bound >= temp.bound && PQ[2 * i + 1].bound >= temp.bound)
//			break;
//		if (2 * i < pq_num && PQ[2 * i].bound > PQ[2 * i + 1].bound) {
//			PQ[i] = PQ[2 * i + 1];
//			i = 2 * i + 1;
//		}
//		else {
//			PQ[i] = PQ[2 * i];
//			i = 2 * i;
//		}
//	}
//	PQ[i] = temp;
//	return result;
//}
//
//int Calc_min(int * a, int row, int n) {
//	int i, result = MAX_NUM;
//	for (i = 1; i <= n; i++) {
//		if (!a[i] && (i != row)) {
//			if (result > adj[row][i]) {
//				result = adj[row][i];
//			}
//		}
//	}
//	return result;
//}
//
//int getBound(int * a, int c, int n) {
//	int * col;
//	int * row;
//	int result = 0;
//	int curNum, preNum, i;
//
//	col = (int*)malloc(sizeof(int)*(n + 1));
//	row = (int*)malloc(sizeof(int)*(n + 1));
//	memset(col, 0, sizeof(int)*(n + 1));
//	memset(row, 0, sizeof(int)*(n + 1));
//
//	if (c == 0) {
//		for (i = 1; i <= n; i++) {
//			result += Calc_min(col, i, n);
//		}
//		return result;
//	}
//	preNum = a[1];
//	result += adj[1][preNum];
//	row[1] = 1;
//	col[preNum] = 1;
//	i = 1;
//
//	while (i < c) {
//		row[preNum] = 1;
//		curNum = a[i + 1];
//		col[curNum] = 1;
//		result += adj[preNum][curNum];
//
//		preNum = curNum;
//		i += 1;
//	}if (c != n - 1) {
//		for (i = 2; i <= n; i++) {
//			if (!row[i]) {
//				if (i == preNum) {
//					col[1] = 1;
//					result += Calc_min(col, i, n);
//					col[1] = 0;
//				}
//				else
//					result += Calc_min(col, i, n);
//			}
//		}
//	}
//	else {
//		result += adj[a[n - 1]][1];
//	}
//	free(col);
//	free(row);
//	col = NULL;
//	row = NULL;
//
//	return result;
//}
//
//void removeNode(double bound) {
//	int i = 0;
//	int n = pq_num;
//	pq_num = i;
//	//while (pq_num > i) {
//	//	free(PQ[pq_num].path);
//	//	PQ[pq_num].path = NULL;
//	//	pq_num--;
//	//}
//	for (i = i + 1; i <= n; i++) {
//		if (PQ[i].bound > bound) {
//			free(PQ[i].path);
//			PQ[i].path = NULL;
//		}
//		else {
//			enque(PQ[i]);
//		}
//	}
//}
//
//int find_n(int * a, int b, int n) {
//	int i, j = 0;
//
//	for (i = 1; i < n; i++) {
//		if (a[i] == b) {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int find_last_num(int * a, int n) {
//	int i;
//	int sum = 0;
//	for (i = 1; i < n - 1; i++) {
//		sum += a[i];
//	}
//	return n * (n + 1) / 2 - 1 - sum;
//}
//
//void sorting(int *a, int * b, int n, int level) {
//	int i;
//
//	for (i = 1; i <= n; i++)
//		b[i] = 1;
//
//	for (i = 1; i <= level; i++) {
//		b[a[i]] = 0;
//	}
//}
//
//void copyint(int *a, int *b, int n) {
//	int i;
//
//	for (i = 1; i < n; i++) {
//		b[i] = a[i];
//	}
//}
//
//int main(void) {
//	int i, j, n;
//	Node a, temp;
//	Node min_node;
//	int min_num = MAX_NUM;
//	int min_path[30];
//	int *v;
//	//int finding_array[30];
//	int sorted[30];
//	char file[50];
//
//	printf("input file name? ");
//	scanf("%s", file);
//
//	freopen(file, "r", stdin);
//	freopen("output.txt", "w", stdout);
//
//	scanf("%d", &n);
//	v = (int*)malloc(sizeof(int)*n);
//	for (i = 1; i <= n; i++)
//		for (j = 1; j <= n; j++)
//			scanf("%d", &adj[i][j]);
//
//	a.bound = getBound(v, 0, n);
//	a.level = 0;
//	a.path = v;
//	//min_node.bound = MAX_NUM;
//	//min_node.level = a.level;
//	//min_node.path = (int*)malloc(sizeof(int) * n);
//	enque(a);
//
//	while (pq_num != 0) {
//		a = deque();
//
//		if (a.bound < min_num) {
//			temp.level = a.level + 1;
//
//			if (temp.level == n - 1) {
//				temp.path = (int*)malloc(sizeof(int)*n);
//				copyint(a.path, temp.path, n - 1);
//				temp.path[n - 1] = find_last_num(a.path, n);
//				temp.bound = getBound(temp.path, temp.level, n);
//				//if (min_node.bound > temp.bound) {
//				//	min_node.bound = temp.bound;
//				//	copyint(temp.path, min_node.path, n);
//				//	//removeNode(min_node.bound);
//				//}
//				if (min_num > temp.bound) {
//					min_num = temp.bound;
//					copyint(temp.path, min_path, n);
//					removeNode(min_num);
//				}
//				a.path = NULL;
//			}
//			else {
//				/*for (i = 2; i <= n; i++) {
//				if (find_n(a.path, i, temp.level)) {
//				temp.path = (int*)malloc(sizeof(int)*n);
//				memcpy(temp.path, a.path, sizeof(int)*n);
//				temp.path[temp.level] = i;
//				temp.bound = getBound(temp.path, temp.level, n);
//				if (temp.bound < min_node.bound)
//				enque(temp);
//				}
//				}*/
//				sorting(a.path, sorted, n, a.level);
//				for (i = 2; i <= n; i++) {
//					if (sorted[i]) {
//						temp.path = (int*)malloc(sizeof(int)*n);
//						copyint(a.path, temp.path, temp.level);
//						temp.path[temp.level] = i;
//						temp.bound = getBound(temp.path, temp.level, n);
//						if (temp.bound < min_num)
//							enque(temp);
//					}
//				}
//				free(a.path);
//				a.path = NULL;
//			}
//		}
//	}
//	printf("%d\n", min_num);
//	printf("1\n");
//	for (i = 1; i < n; i++) {
//		printf("%d\n", min_path[i]);
//	}
//	printf("1");
//
//
//}