//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include <string.h>
//#define Nextsize 26
//
//char change = 'A';//입력 문자를 숫자로 변경해주기 위해
//int visited_ck[Nextsize];//방문한것 check
//int graph[Nextsize][1000];
//char stack[Nextsize];
//int st_size = 0;
//int count;
//FILE *f_out;
//void all_path(int now);
//void graph_print();
//int main(int argc, char *argv[])
//{
//	int v_n, ed_n;//vertex_num,edge_num
//	char s_p, e_p;//start_point,end_point
//	char v1, v2;
//	FILE *f;
//
//	f = fopen(argv[1], "r");
//	f_out = fopen(argv[2], "w");
//
//	fscanf(f,"%d %d %c %c", &v_n, &ed_n, &s_p, &e_p);
//	s_p = s_p - change;
//	e_p = e_p - change;
//	memset(graph, -1, sizeof(graph));
//	for (int i = 0; i < v_n; i++)
//	{
//		graph[i][0] = i;
//	}
//	for (int i = 0; i < ed_n; i++)
//	{
//		int j = 1;
//		fscanf(f," %c %c", &v1, &v2);
//		v1 = v1 - change;
//		v2 = v2 - change;
//		while (1)
//		{
//			if (graph[v1][j] == -1)
//			{
//				graph[v1][j] = v2;
//				break;
//			}
//			j++;
//		}
//	}
//	fclose(f);
//	all_path(s_p,e_p);
//	fprintf(f_out, "%d\n", count);
//	return 0;
//}
//void all_path(int now,int e_p)
//{
//	int j = 0;
//	int i;
//	if (visited_ck[now])return;
//	visited_ck[now] = 1;
//	stack[st_size] = now + change;
//	st_size++;
//	if (now == e_p)
//	{
//		graph_print();
//		count++;
//	}
//	for ( i = graph[now][j]; i != -1; i = graph[now][j++])
//	{
//		all_path(i, e_p);
//	}
//	visited_ck[now] = 0;
//	st_size--;
//}
//void graph_print()
//{
//	for (int i = 0; i < st_size; i++)
//		fprintf(f_out,"%c", stack[i]);
//	fprintf(f_out,"\n");
//}