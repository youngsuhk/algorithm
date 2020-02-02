//#include <stdio.h>
//#define BLACK 0
//#define RED 1
//typedef struct NODE
//{
//	int key;
//	int clr;
//	struct NODE *left, *right, *parent;
//}NODE;
//typedef struct ROOT
//{
//	int clr;
//	struct ROOT *nil;
//	struct NODE *r;
//}ROOT;
//ROOT *r;
//void nil_creat(ROOT *r);//nil노드 생성
//void left_rotate(ROOT *r, NODE *n);//오른쪽으로 편향된 노드를 회전 
//void right_rotate(ROOT *r, NODE *n);//왼쪽으로 편향된 노드를 회전
//void insert_fixup(ROOT *r, NODE *n);//Red-Black의 특성을 유지.
//NODE *create_node(int key);//노드생성
//void RBT_insert(ROOT *r, int key);//키를 포함하는 노드를 트리에 삽입. 이진 탑색트리의 구조
//void inorder(FILE *f_output,NODE *r);
//void preorder(FILE *f_output,NODE *r);
//int main(int argc, char *argv[])
//{
//	FILE *f_input;
//	FILE *f_output;
//	int n;
//	int input_n;
//	f_input = fopen(argv[1], "r");
//	f_output = fopen(argv[2], "a");
//	fscanf(f_input,"%d", &n);
//	r = (ROOT*)malloc(sizeof(ROOT));
//	nil_creat(r);
//	for (int i = 1; i <= n; i++)
//	{
//		fscanf(f_input,"%d", &input_n);
//		RBT_insert(r, input_n);
//		fprintf(f_output,"Inserting %d", input_n);
//		fprintf(f_output,"\nINORDER:");
//		inorder(f_output,r->r);
//		fprintf(f_output,"\nPREORDER:");
//		preorder(f_output,r->r);
//		fprintf(f_output,"\n");
//	}
//
//}
//void nil_creat(ROOT *r)
//{
//	r->nil = (NODE*)malloc(sizeof(NODE));
//	(r->nil)->clr = BLACK;
//	r->r = r->nil;
//}
//
//void left_rotate(ROOT *r, NODE *n)
//{
//	NODE *temp;
//	temp = n->right;
//	n->right = temp->left;
//
//	if (temp->left != r->nil)
//	{
//		(temp->left)->parent = n;//
//	}
//
//	temp->parent = n->parent;
//
//	if (n->parent == r->nil)
//	{
//		r->r = temp;
//	}
//	else if (n == (n->parent)->left)
//	{
//		(n->parent)->left = temp;
//	}
//	else
//	{
//		(n->parent)->right = temp;
//	}
//
//	temp->left = n;
//	n->parent = temp;
//}
//
//void right_rotate(ROOT *r, NODE *n)
//{
//	NODE *temp;
//	temp = n->left;
//	n->left = temp->right;
//
//	if (temp->right != r->nil)
//	{
//		(temp->right)->parent = n;
//	}
//	temp->parent = n->parent;
//	if (n->parent == r->nil)
//	{
//		r->r = temp;
//	}
//	else if (n == (n->parent)->left)
//	{
//		(n->parent)->left = temp;
//	}
//	else
//	{
//		(n->parent)->right = temp;
//	}
//
//	temp->right = n;
//	n->parent = temp;
//}
//
//void insert_fixup(ROOT *r, NODE *n)
//{
//	NODE *u = NULL;;
//
//	while ((n->parent)->clr == RED)
//	{
//		if (n->parent == (n->parent->parent)->left)
//		{
//			u = (n->parent->parent)->right;
//
//			if (u->clr == RED)
//			{
//				(n->parent)->clr = BLACK;
//				u->clr = BLACK;
//
//				(n->parent->parent)->clr = RED;
//
//				n = (n->parent->parent);
//			}
//			else
//			{
//				if (n == (n->parent)->right)
//				{
//					n = (n->parent);
//
//					left_rotate(r, n);
//				}
//
//				(n->parent)->clr = BLACK;
//				(n->parent->parent)->clr = RED;
//
//				right_rotate(r, (n->parent->parent));
//			}
//		}
//		else
//		{
//
//			u = (n->parent->parent)->left;
//
//			if (u->clr == RED)
//			{
//				(n->parent)->clr = BLACK;
//				u->clr = BLACK;
//
//				(n->parent->parent)->clr = RED;
//
//				n = (n->parent->parent);
//			}
//			else
//			{
//				if (n == (n->parent)->left)
//				{
//					n = (n->parent);
//
//					right_rotate(r, n);
//				}
//
//				(n->parent)->clr = BLACK;
//				(n->parent->parent)->clr = RED;
//
//				left_rotate(r, (n->parent->parent));
//			}
//		}
//	}
//
//	(r->r)->clr = BLACK;
//}
//NODE *create_node(int key)
//{
//	NODE *temp = (NODE *)malloc(sizeof(NODE));
//	temp->left = r->nil;
//	temp->right = r->nil;
//	temp->clr = RED;
//	temp->key = key;
//	return temp;
//}
//void RBT_insert(ROOT *r, int key)
//{
//	NODE *n;
//	NODE *temp = r->r;
//	NODE *p = r->nil;
//	n = create_node(key);
//
//	// 노드를 삽입할 위치 찾기.
//	while (temp != r->nil)
//	{
//		p = temp;
//		if (key > temp->key)
//		{
//			temp = temp->right;
//		}
//		else
//		{
//			temp = temp->left;
//		}
//	}
//	n->parent = p;
//	if (p == r->nil)
//	{
//		r->r = n;
//	}
//	else if (key > p->key)
//	{
//		p->right = n;
//	}
//	else
//	{
//		p->left = n;
//	}
//
//	insert_fixup(r, n);
//}
//
//
//void inorder(FILE *f_output,NODE *r)
//{
//	if (r->key == 0)
//		return;
//	inorder(f_output,r->left);
//	fprintf(f_output,"%d", r->key);
//	if (r->clr == BLACK)
//		fprintf(f_output,"(B) ");
//	else
//		fprintf(f_output,"(R) ");
//	inorder(f_output,r->right);
//}
//void preorder(FILE *f_output,NODE *r)
//{
//	if (r->key == 0)
//		return;
//	fprintf(f_output,"%d", r->key);
//	if (r->clr == BLACK)
//		fprintf(f_output,"(B) ");
//	else
//		fprintf(f_output,"(R) ");
//	preorder(f_output,r->left);
//	preorder(f_output,r->right);
//}