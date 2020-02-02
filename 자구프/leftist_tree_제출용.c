////2014105041 서영석
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//#define SWAP(x, y, t) ( (t)=(x), (x)=(y), (y)=(t) )
//#define max_size 10000
//
//typedef struct {
//	int key;
//}element;
//
//typedef struct leftist *leftist_tree;
//typedef struct leftist {
//	leftist_tree left_child;
//	element data;
//	leftist_tree right_child;
//	int shortest;
//}leftist;
//
//char *file_name;
//int front = 0;
//int rear = 0;
//leftist_tree queue[max_size];
//void min_combine(leftist_tree*, leftist_tree*);
//void min_union(leftist_tree*, leftist_tree*);
//void addq(int, int*, leftist_tree);
//leftist_tree deleteq(int*, int);
//void print_tree(leftist_tree);
//leftist_tree *create_node(int);
//
//
//int main(int argc, char *argv[])
//{
//	FILE *f_input;
//	FILE *f_output;
//	leftist_tree t1 = NULL;
//	leftist_tree t2 = NULL;
//	leftist_tree node_t;
//	int i;
//	int n, input_n;
//	f_input = fopen(argv[1], "r");
//	f_output = fopen(argv[2], "a");
//	fscanf(f_input,"%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		fscanf(f_input,"%d", &input_n);
//		node_t = create_node(input_n);
//		min_combine(&t1, &node_t);
//	}
//	print_tree(f_output,t1);
//	fscanf(f_input,"%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		fscanf(f_input,"%d", &input_n);
//		node_t = create_node(input_n);
//		min_combine(&t2, &node_t);
//	}
//	print_tree(f_output,t2);
//	min_combine(&t1, &t2);
//	print_tree(t1, f_output);
//	fclose(f_input);
//	fclose(f_output);
//	return 0;
//}
//leftist_tree *create_node(int data)
//{
//	leftist_tree node_t;
//	node_t = (leftist_tree)malloc(sizeof(leftist));
//	node_t->data.key = data;
//	node_t->shortest = 1;
//	node_t->left_child = NULL;
//	node_t->right_child = NULL;
//	return node_t;
//}
//
//void min_combine(leftist_tree *a, leftist_tree *b)
//{
//	if (!*a) *a = *b;
//	else if (*b) min_union(a, b);
//	*b = NULL;
//}
//
//
//void min_union(leftist_tree *a, leftist_tree *b)
//{
//	leftist_tree temp;
//
//	if ((*a)->data.key >(*b)->data.key)
//		SWAP(*a, *b, temp);
//
//	if (!(*a)->right_child) {
//		(*a)->right_child = *b;
//	}
//	else min_union(&(*a)->right_child, b);
//
//	if (!(*a)->left_child) {
//		(*a)->left_child = (*a)->right_child;
//		(*a)->right_child = NULL;
//	}
//	else if ((*a)->left_child->shortest < (*a)->right_child->shortest)
//		SWAP((*a)->left_child, (*a)->right_child, temp);
//
//	(*a)->shortest = (!(*a)->right_child) ? 1 : (*a)->right_child->shortest + 1;
//}
//
//void addq(int front, int* rear, leftist_tree data)
//{
//	*rear = (*rear + 1);
//	queue[*rear] = data;
//}
//
//leftist_tree deleteq(int* front, int rear) {
//	leftist_tree temp;
//
//	if (*front == rear) {
//		return NULL;
//	}
//
//	*front = (*front + 1);
//	temp = queue[*front];
//
//	return temp;
//}
//
//
//void print_tree(FILE *f_output,leftist_tree data)
//{
//	front = 0;
//	rear = 0;
//	int l_c = 0;//level_cnt
//	int n_c_c = 0;//null_child_cnt
//	int f_n_c = 0;//finish_null_cnt
//
//	leftist_tree empt = (leftist_tree)malloc(sizeof(leftist));;
//	empt = create_node(-1);//leftchild or rightchild가 NULL일 경우
//	addq(front, &rear, data);
//	while (1)
//	{
//		data = deleteq(&front, rear); //현재 노드를 큐에서 빼옴
//		if (data) {
//
//			//자식 노드들을 큐에 추가
//			//자식 노드가 NULL일경우 key가 -1인 node 삽입
//			if (data->left_child) {
//				addq(front, &rear, data->left_child);
//			}
//			else {
//				addq(front, &rear, empt);
//			}
//			if (data->right_child) {
//				addq(front, &rear, data->right_child);
//			}
//			else {
//				addq(front, &rear, empt);
//			}
//			if (data->data.key != -1)//자식이 존재시 key 출력
//			{
//				fprintf(f_output,"%d  ", data->data.key);
//			}
//			else //자식이 없으면 - 출력
//			{
//				fprintf(f_output,"-  ");
//				n_c_c++;
//			}
//			if (front == (int)pow(2, l_c + 1) - 1) {
//				f_n_c = 0;
//				fprintf(f_output,"\n");
//				l_c++;
//				for (int i = front; i < rear; i++)
//				{
//					if (queue[i]->data.key == -1)
//						f_n_c++;
//				}
//				if (f_n_c == (int)(pow(2, l_c)))
//				{
//					if (l_c != 1)return;
//				}
//				n_c_c = 0;
//			}
//		}
//	}
//}