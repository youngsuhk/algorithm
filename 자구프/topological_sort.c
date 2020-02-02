//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct a {
//	int v;
//	struct a *fin;
//	struct a *next;
//}List;
//
//List *list = NULL;
//List * sort = NULL;
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
//void connect(int i, int j) {
//	List *temp;
//
//	temp = (List*)malloc(sizeof(List));
//	temp->v = j;
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
//void printlist(int n) {
//	List *temp;
//
//	printf("%d : ", n);
//	temp = list[n].next;
//	while (temp != NULL) {
//		printf("(%d) ", temp->v);
//		temp = temp->next;
//	}
//	printf("\n");
//}
//
//int p[100];
//int c[100];
//
//void dfs_visit(int a) {
//	int i;
//	List *l, *temp;
//
//	c[a] = 1;
//
//	l = list[a].next;
//	while (l != NULL) {
//		if (c[l->v] == 0) {
//			p[l->v] = a;
//			dfs_visit(l->v);
//		}
//		l = l->next;
//	}
//
//	temp = (List*)malloc(sizeof(List));
//	temp->next = NULL;
//	temp->v = a;
//
//	if (sort == NULL)
//		sort = temp;
//	else {
//		temp->next = sort;
//		sort = temp;
//	}
//	c[a] = 2;
//
//}
//
//void dfs(int n) {
//	int i;
//
//	for (i = 1; i <= n; i++) {
//		p[i] = -1;
//		c[i] = 0;
//	}
//
//	for (i = 1; i <= n; i++) {
//		if (c[i] == 0) {
//			dfs_visit(i);
//		}
//	}
//}
//
//int main(void) {
//	int i, v, e;
//	int from, to;
//	List * temp;
//
//	freopen("input.txt", "r", stdin);
//
//	scanf("%d %d", &v, &e);
//
//	list = (List*)malloc(sizeof(List)*(v + 1));
//
//	listclear(v);
//
//	for (i = 0; i < e; i++) {
//		scanf("%d %d", &from, &to);
//
//		connect(from, to);
//	}
//
//	for (i = 1; i <= v; i++) {
//		printlist(i);
//	}
//
//	dfs(v);
//
//	for (i = 1; i <= v; i++) {
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//
//	temp = sort;
//	while (temp) {
//		printf("%d ", temp->v);
//		temp = temp->next;
//	}
//	printf("\n");
//
//	return 0;
//}