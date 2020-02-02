//#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
//typedef int iType;
//
//typedef struct tNode *treePointer;
//typedef struct tNode {
//	int key;
//	treePointer leftChild, rightChild, parent,fin;
//} tNode;
//
//tNode *root;
//tNode *q[100];
//int front = 1;
//int last = 1;
//tNode *CreateNode(int data)//node 생성
//{
//	tNode *newnode = (tNode*)malloc(sizeof(tNode));
//	newnode->key = data;
//	newnode->leftChild = NULL;
//	newnode->rightChild = NULL;
//	newnode->parent = NULL;
//	newnode->fin = NULL;//tree의 마지막 포인트(root만 가지고 있다)
//	q[last++] = newnode;
//	return newnode;
//}
//
//void siftup(tNode *newnode)//insert 시 입력값을 parent값과 비교하여 올려주는 함수
//{
//	int siftkey=newnode->key;
//	tNode *temp = newnode;
//	while (temp->parent != NULL&&temp->parent->key > siftkey)
//	{
//		temp->key = temp->parent->key;
//		temp = temp->parent;
//	}
//	temp->key = siftkey;
//	root->fin = newnode;
//}
//void siftdown()//delete시 fin의 key값을 root에 넣고 아래로 내려주는 함수
//{
//	tNode *temp = root;
//	int smallerchild;
//	int siftkey=root->key;
//	while (temp->leftChild!=NULL)//leftChild와 rightChild의 값을 비교하여 작은것쪽에 
//	{
//		if (temp->rightChild == NULL||temp->leftChild->key < temp->rightChild->key)
//		{
//			temp->key = temp->leftChild->key;
//			temp = temp->leftChild;
//			
//		}
//		else
//		{
//			temp->key = temp->rightChild->key;
//			temp = temp->rightChild;
//		}
//	}
//	temp->key = siftkey;
//}
//void insert(int data)
//{
//	tNode *newnode;
//	tNode *temp;
//	newnode = CreateNode(data);
//	temp = q[front];
//	if (temp->leftChild==NULL)
//	{
//		temp->leftChild = newnode;
//		newnode->parent = temp;
//		siftup(newnode);
//	}
//	else if (temp->rightChild==NULL)
//	{
//		temp->rightChild = newnode;
//		newnode->parent = temp;
//		siftup(newnode);
//		front++;
//	}
//}
//int delete()
//{
//	int min;
//	min = root->key;//delete data
//	last = last - 1;//q last
//	root->key = root->fin->key;//마지막 data를 가장앞으로
//	if (root->fin->parent->rightChild == NULL)
//	{
//		root->fin->parent->leftChild = NULL;
//	}
//	else
//	{
//		root->fin->parent->rightChild = NULL;
//		front--;
//	}
//	root->fin = q[last-1];
//	siftdown();
//}
//
//void print_heap()
//{
//	int level = 2;
//	printf("Now heap print:\n");
//	for (int i = 1; i < last; i++) {
//		if (i == level) {
//			printf("\n");
//			level *= 2;
//		}
//		printf("%2d ",q[i]->key);
//	}
//	printf("\n");
//}
//int search(tNode *temp,int data,int *search_ck)
//{
//	if (temp->key == data) { *search_ck += 1; return; }
//	if (temp->key > data)return 1;
//	if (temp->leftChild!=NULL&&temp->leftChild->key <= data)
//	{
//		search(temp->leftChild, data,search_ck);
//	}
//	if (temp->rightChild!=NULL&&temp->rightChild->key <= data)
//	{
//		search(temp->rightChild, data,search_ck);
//	}
//	return 1;
//}
//int main()
//{
//	int n;
//	int input_data;
//	tNode *temp;
//	scanf("%d", &n);
//	scanf("%d", &input_data);
//	root = CreateNode(input_data);
//	
//	for (int i = 1; i < n; i++)
//	{
//		scanf("%d", &input_data);
//		insert(input_data);
//	}
//	print_heap();
//	printf("Select menu and input the number(1:insert,2:delete,3:end)\n");
//	//delete -> insert 할때 q[front]때문에 문제 생김.
//	while (1)
//	{
//		int insert_n=0;
//		int search_ck=0;
//		temp = root;
//		scanf("%d", &n);
//		if (n == 3)break;
//		switch (n)
//		{
//		case 1:
//			scanf("%d", &insert_n);
//			search(temp,insert_n,&search_ck);
//			if (search_ck != 0) {
//				printf("중복된 숫자 존재\n다시 입력해주세요\n");
//				break;
//			}
//			insert(insert_n);
//			print_heap();
//			break;
//		case 2:
//			delete();
//			print_heap();
//			break;
//		default:
//			break;
//		}
//	}
//}
