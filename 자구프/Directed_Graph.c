//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <string.h>
//#define Nextsize 26
//
//typedef struct node {
//	char ver;
//	struct node *next[Nextsize];
//	int nextsize;
//} node;
//
////typedef struct kt_list {
////	node *node[size];
////	int size;
////} kt_liset;
//node *nodegroup[Nextsize];
//
//node *graph;
//node *start_ver;
//node *end_ver;
//node *ver1, *ver2;
//node *queue[1000];
//int check[150];
//int cnt = 0;
//int front,last;
//node *createnode(char v)
//{
//	node *newnode;
//	newnode = (node*)malloc(sizeof(node));
//	newnode->ver = v;
//	newnode->nextsize = 0;
//	memset(newnode->next, NULL, sizeof(newnode->next));
//	//newnode->nextsize = NULL;
//	return newnode;
//}
//void makegraph(node *ver1, node *ver2) {
//	ver1->nextsize = ver1->nextsize + 1;
//	ver1->next[ver1->nextsize] = ver2;
//}
//
//void Directed_Graph_bfs(node *s_p, node *e_p)
//{
//	int i = 0;
//	node *temp;
//	
//	for (temp = queue[front]; queue[front] != NULL; front++)
//	{
//		while(1)
//		{
//			if (i > temp->nextsize)break;
//
//			if (temp->next[i] != NULL)
//			{
//				if (temp->next[i] == e_p)
//				{ cnt++; continue; }
//				queue[last++] = temp->next[i++];
//			}
//		}
//	}
//}
//int main(int argc, char *argv[]) {
//	int v_n,ed_n;//vertex_num,edge_num
//	char s_p, e_p;//start_point,end_point
//	char v1, v2;
//
//	
//	scanf("%d %d %c %c", &v_n , &ed_n, &s_p, &e_p);
//	check[s_p]++;
//	check[e_p]++;
//	start_ver = createnode(s_p);
//	end_ver = createnode(e_p);
//
//	for (int i = 0; i < ed_n; i++)
//	{
//		scanf(" %c %c", &v1, &v2);
//		if(check[v1]==0)
//		ver1 = createnode(v1);
//		ver2 = createnode(v2);
//		makegraph(ver1, ver2);
//	}
//	Directed_Graph_bfs(nodegroup[s_p - 65], nodegroup[e_p - 65]);
//	return 0;
//}