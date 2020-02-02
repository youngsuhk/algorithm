////mst = minimum spanning tree 최소 신장 트리
////Spanning Tree 중에서 사용된 간선들의 가중치 합이 최소인 트리
////spanning tree - > 래프 내의 모든 정점을 포함하는 트리
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define INFINITY 10000
//
//typedef struct {
//	int index;
//	int d;
//}Heap;
//
//Heap heap[100];
//int heap_num = 0;
//
//typedef struct a {
//	int v;
//	int wei;
//	int flag;
//	struct a *fin;
//	struct a *next;
//}List;
//
//List *list = NULL;
//
//void listclear(int n) {
//	int i;
//
//	for (i = 1; i <= n; i++) {
//		list[i].fin = NULL;
//		list[i].next = NULL;
//	}
//}
//
//void connect(int i, int j, int wei) {//adj
//	List *temp;
//
//	temp = (List*)malloc(sizeof(List));
//	temp->v = j;
//	temp->wei = wei;
//	temp->next = NULL;
//
//	if (list[i].next == NULL) {
//		list[i].next = temp;
//		list[i].fin = temp;
//	}
//	else {
//		list[i].fin->next = temp;
//		list[i].fin = temp;
//	}
//}
//
//void siftdown(int a) {
//	int i, j;
//	int temp;
//	int find = 1;
//
//	i = a;
//	temp = heap[i].index;
//
//	while (2 * i <= heap_num && find) {
//
//		if (2 * i < heap_num && heap[2 * i].index > heap[2 * i + 1].index) {
//			j = 2 * i + 1;
//		}
//		else {
//			j = 2 * i;
//		}
//		if (temp > heap[j].index) {
//			heap[i] = heap[j];
//			i = j;
//		}
//		else
//			find = 0;
//	}
//}
//
//void makeheap(int n) {
//	int i, j;
//
//	for (i = n / 2; i >= 1; i--) {
//		siftdown(i);
//	}
//}
//
//void insert(Heap a) {
//	int i;
//
//	heap_num++;
//
//	i = heap_num;
//	while (i >= 1 && heap[i / 2].d > a.d) {
//		heap[i] = heap[i / 2];
//		i /= 2;
//	}
//	heap[i] = a;
//}
//
//Heap delete() {
//	int i;
//	Heap result;
//	Heap temp;
//
//	result = heap[1];
//	temp = heap[heap_num--];
//	i = 1;
//
//	while (2 * i <= heap_num) {
//		if (2 * i < heap_num && heap[2 * i].d > heap[2 * i + 1].d) {
//			if (temp.d > heap[2 * i + 1].d) {
//				heap[i] = heap[2 * i + 1];
//				i = 2 * i + 1;
//			}
//			else
//				break;
//		}
//		else {
//			if (temp.d > heap[2 * i].d) {
//				heap[i] = heap[2 * i];
//				i = 2 * i;
//			}
//			else
//				break;
//		}
//	}
//	heap[i] = temp;
//
//	return result;
//}
//
//int p[100];
//int d[100];
//int flag[100];
//
//void Mst_prim(int n) {
//	int i;
//	Heap temp, temp_heap;
//	List *temp_list;
//
//	for (i = 1; i <= n; i++) {
//		d[i] = INFINITY;
//		flag[i] = 0;
//	}
//
//	d[1] = 0;
//	p[1] = -1;
//	i = 0;
//
//	temp.index = 1;
//	temp.d = 0;
//
//	insert(temp);
//	while (heap_num != 0 && i != n - 1) {
//		temp = delete();
//
//		if (flag[temp.index] == 0) {
//			flag[temp.index] = 1;
//			temp_list = list[temp.index].next;
//
//			while (temp_list != NULL) {
//				if (flag[temp_list->v] == 0 && temp_list->wei < d[temp_list->v]) {
//					p[temp_list->v] = temp.index;
//					d[temp_list->v] = temp_list->wei;
//					temp_heap.index = temp_list->v;
//					temp_heap.d = d[temp_list->v];
//					insert(temp_heap);
//					i++;
//				}
//				temp_list = temp_list->next;
//			}
//		}
//	}
//}
//
//int main(void) {
//	int i, j;
//	int v, e;
//	int e1, e2, wei;
//	int sum = 0;
//
//	freopen("input.txt", "r", stdin);
//
//	scanf("%d %d", &v, &e);//ver 개수, edge개수 입력
//
//	list = (List*)malloc(sizeof(List)*(v + 1));
//
//	listclear(v);//adj list 초기화
//
//	for (i = 0; i < e; i++) {// e1연결 e2 방향성 x
//		scanf("%d %d %d", &e1, &e2, &wei);
//		connect(e1, e2, wei);
//		connect(e2, e1, wei);
//	}
//
//	Mst_prim(v);
//
//	for (i = 2; i <= v; i++) {
//		printf("%d ", p[i]);
//		sum += d[i];
//	}
//	printf("\n");
//	printf("%d\n", sum);
//
//	return 0;
//}