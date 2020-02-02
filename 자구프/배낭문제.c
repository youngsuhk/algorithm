//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct {
//	int profit;
//	int level;
//	int index;
//	int weight;
//	double bound;
//}Node;
//
//int weight[10000];
//int profit[10000];
//
//Node *PQ = NULL;
//int pq_num = 0;
//int pq_maxsize = 2;
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
//		if (temp.bound > PQ[i / 2].bound) {
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
//		if (PQ[2 * i].bound <= temp.bound && PQ[2 * i + 1].bound <= temp.bound)
//			break;
//		if (2 * i < pq_num && PQ[2 * i].bound < PQ[2 * i + 1].bound) {
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
//int getBound(int i, int w, int n) {
//	double b = 0;
//
//	for (i; i <= n; i++) {
//		if (weight[i] > w) {
//			b += (double)profit[i] / (double)weight[i] * (double)w;
//			break;
//		}
//		w -= weight[i];
//		b += profit[i];
//	}
//	return b;
//}
//
//void print(int index, int level, int i, int n) {
//	if (index == 1) return;
//	else {
//		print(index / 2, level, 0, n);
//		if (index % 2 == 0)
//			printf("1");
//		else
//			printf("0");
//		if (!i) {
//			printf("\n");
//			return;
//		}
//		else {
//			if (level + 1 <= n)
//				printf("\n");
//		}
//		for (level = level + 1; level <= n; level++) {
//			printf("0");
//			if (level < n)
//				printf("\n");
//		}
//	}
//}
//
//int main(void) {
//	Node a, temp, max;
//	int i, n, w;
//	char file[50];
//
//	printf("input file name? ");
//	scanf("%s", file);
//
//	freopen(file, "r", stdin);
//	freopen("output.txt", "w", stdout);
//
//	scanf("%d", &n);
//	scanf("%d", &w);
//
//	for (i = 1; i <= n; i++)
//		scanf("%d %d", &profit[i], &weight[i]);
//
//	a.bound = getBound(1, w, n);
//	a.level = 0;
//	a.profit = 0;
//	a.weight = 0;
//	a.index = 1;
//	enque(a);
//	max = a;
//
//	while (pq_num != 0) {
//		a = deque();
//
//		if (a.bound > max.profit && a.weight <= w) {
//			temp.level = a.level + 1;
//			temp.index = a.index * 2;
//			temp.bound = a.profit + getBound(temp.level, w - a.weight, n);
//			temp.weight = a.weight + weight[temp.level];
//			temp.profit = a.profit + profit[temp.level];
//
//			if (temp.weight <= w && temp.profit > max.profit)
//				max = temp;
//			if (temp.bound > max.profit)
//				enque(temp);
//
//			temp.index += 1;
//			temp.weight = a.weight;
//			temp.profit = a.profit;
//			temp.bound = a.profit + getBound(temp.level + 1, w - a.weight, n);
//
//			if (temp.bound > max.profit)
//				enque(temp);
//		}
//	}
//	printf("%d\n", max.profit);
//	print(max.index, max.level, 1, n);
//	return 0;
//}