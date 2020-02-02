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
//tNode *CreateNode(int data)//node ����
//{
//	tNode *newnode = (tNode*)malloc(sizeof(tNode));
//	newnode->key = data;
//	newnode->leftChild = NULL;
//	newnode->rightChild = NULL;
//	newnode->parent = NULL;
//	newnode->fin = NULL;//tree�� ������ ����Ʈ(root�� ������ �ִ�)
//	q[last++] = newnode;
//	return newnode;
//}
//
//void siftup(tNode *newnode)//insert �� �Է°��� parent���� ���Ͽ� �÷��ִ� �Լ�
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
//void siftdown()//delete�� fin�� key���� root�� �ְ� �Ʒ��� �����ִ� �Լ�
//{
//	tNode *temp = root;
//	int smallerchild;
//	int siftkey=root->key;
//	while (temp->leftChild!=NULL)//leftChild�� rightChild�� ���� ���Ͽ� �������ʿ� 
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
//	root->key = root->fin->key;//������ data�� ���������
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
//	//delete -> insert �Ҷ� q[front]������ ���� ����.
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
//				printf("�ߺ��� ���� ����\n�ٽ� �Է����ּ���\n");
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
