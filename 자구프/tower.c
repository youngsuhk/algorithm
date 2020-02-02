//#include <stdio.h>
//#include <stdlib.h>
//
//#define INFINITY 100000
//
//typedef struct a {
//	int v;
//	int high;
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
//	for (i = 0; i <= n; i++) {
//		list[i].fin = NULL;
//		list[i].next = NULL;
//	}
//}
//
//void connect(int i, int j, int high) {
//	List *temp;
//
//	temp = (List*)malloc(sizeof(List));
//	temp->v = j;
//	temp->high = high;
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
//		printf("(%d %d) ", temp->v, temp->high);
//		temp = temp->next;
//	}
//	printf("\n");
//}
//
//int p[1000];
//int c[1000];
//
//int p_bell[1000];
//int d_bell[1000];
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
//	for (i = 0; i <= n; i++) {
//		p[i] = -1;
//		c[i] = 0;
//	}
//
//	for (i = 0; i <= n; i++) {
//		if (c[i] == 0) {
//			dfs_visit(i);
//		}
//	}
//}
//
//int depth = 0;
//
//void print(int n) {
//	depth++;
//	if (p_bell[n] == 0) {
//		printf("%d\n", depth - 1);
//		return;
//	}
//	print(p_bell[n]);
//}
//
//int main(void) {
//	int i, j, v, e;
//	int from, to;
//	List * temp, *temp2;
//	int n, area[1000], wei[1000], high[1000];
//
//	freopen("input.txt", "r", stdin);
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		scanf("%d %d %d", &area[i], &high[i], &wei[i]);
//	}
//
//	list = (List*)malloc(sizeof(List)*(n + 2));
//
//	listclear(n + 1);
//
//	for (i = 1; i <= n; i++) {
//		connect(0, i, 0);
//	}
//
//	for (i = 1; i <= n; i++) {
//		connect(i, n + 1, -high[i]);
//	}
//
//	for (i = 1; i < n; i++) {
//		for (j = i + 1; j <= n; j++) {
//			if (area[i] > area[j] && wei[i] > wei[j]) {
//				connect(i, j, -high[i]);
//			}
//			if (area[i] < area[j] && wei[i] < wei[j]) {
//				connect(j, i, -high[j]);
//			}
//		}
//	}
//
//
//	/*for (i = 0; i <= n+1; i++) {
//	printlist(i);
//	}*/
//
//	dfs(n + 1);
//
//	/*for (i = 1; i <= v; i++) {
//	printf("%d ", p[i]);
//	}
//	printf("\n");*/
//
//	for (i = 0; i <= n + 1; i++) {
//		p_bell[i] = -1;
//		d_bell[i] = INFINITY;
//	}
//
//	d_bell[0] = 0;
//
//	temp = sort;
//	while (temp) {
//		//printf("%d ", temp->v);
//		temp2 = list[temp->v].next;
//		while (temp2 != NULL) {
//			if (d_bell[temp2->v] > d_bell[temp->v] + temp2->high) {
//				d_bell[temp2->v] = d_bell[temp->v] + temp2->high;
//				p_bell[temp2->v] = temp->v;
//			}
//			temp2 = temp2->next;
//		}
//
//		temp = temp->next;
//	}
//	//printf("\n");
//
//	print(n + 1);
//
//	i = p_bell[n + 1];
//	while (i != 0) {
//		printf("%d\n", i);
//		i = p_bell[i];
//	}
//
//	printf("height : %d\n", -d_bell[n + 1]);
//
//	return 0;
//}