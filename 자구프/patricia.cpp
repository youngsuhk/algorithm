#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <queue>
#define length 4

using namespace std;

typedef struct element {
	unsigned key;
}element;

typedef struct patriciaTree * Patricia;
typedef struct patriciaTree {
	int bitNumber;
	int print_check;
	element data;
	Patricia leftChild, rightChild;
}patriciaTree;


Patricia root;
queue<Patricia> q;

// �ش� key ������ bitNumber�� ° �� ��ȯ
int bit(unsigned key, int bitNumber) {


	unsigned a = 1 << length - 1; // 1000 
	unsigned b = a >> bitNumber - 1; // ����� ��Ʈ�ΰ�

	// �ش� bit�� ��ȯ
	return key & (1 << bitNumber);
}
// Ž�� �Լ� �־��� key ���� ã�´�

Patricia search(Patricia t, unsigned k)
{
	Patricia currentNode, nextNode;

	// ��Ʈ�� ��������� ����ó��
	if (!t) return NULL; /*empty tree */

						//  ���� ��� ������ͼ�
	nextNode = t->leftChild;
	currentNode = t;

	 //ã�������� ���� ���ѹ� �� ��ȯ
	while (nextNode->bitNumber > currentNode->bitNumber) {
		 //���� ��� �̵�
		currentNode = nextNode;
		nextNode = (bit(k, nextNode->bitNumber)) ?
			nextNode->rightChild : nextNode->leftChild;
	}
	 //ã�� ��� ��ȯ
	return nextNode;
}

void insert(Patricia *t, element theElement)
{ /* insert theElement into the Patricia tree *t  */
	Patricia current, parent, lastNode, newNode;
	int i;

	 //Ʈ���� ����ִٸ�
	if (!(*t)) {
		// �Ҵ� �� ù ���
		*t = (Patricia)calloc(1, sizeof(patriciaTree));
		(*t)->bitNumber = 0; (*t)->data = theElement;
		(*t)->leftChild = *t; // lch�� �ڱ� �ڽ�
		return;
	}

	// ���� ���� ���� ���
	lastNode = search(*t, theElement.key);
	if (theElement.key == lastNode->data.key) {
		printf("�ش� Ű�� �̹� �����մϴ�!\n");
		//success = 0;
		return;
	}

	 //ó������ �ٸ� ��Ʈ���� ��ġ ã�ƿ���
	for (i = 1; bit(theElement.key, i) == bit(lastNode->data.key, i); i++);

	// Ž���� ���� ����
	current = (*t)->leftChild;
	parent = *t;

	// Ž��
	while (current->bitNumber > parent->bitNumber && current->bitNumber < i) {
		parent = current;
		current = (bit(theElement.key, current->bitNumber)) ?
			current->rightChild : current->leftChild;
	}
	// ���ο� ��带 �Ҵ��� ��
	newNode = (Patricia)calloc(1, sizeof(patriciaTree));
	newNode->data = theElement;
	newNode->bitNumber = i; // ������ üũ�� ��
	newNode->leftChild = (bit(theElement.key, i)) ? current : newNode;
	newNode->rightChild = (bit(theElement.key, i)) ? newNode : current;

	// ��� �������� üũ �� ����
	if (current == parent->leftChild)
		parent->leftChild = newNode;
	else
		parent->rightChild = newNode;
}


void printLevelOrder(Patricia root) {



	while (!q.empty()) {
		Patricia cur;
		cur = q.front();
		q.pop();
		if (cur->leftChild && cur->leftChild->print_check == 0) {
			q.push(cur->leftChild);
			printf("%d(%d %d %d) ", cur->leftChild->data.key, cur->leftChild->bitNumber, cur->leftChild->leftChild != NULL ? cur->leftChild->leftChild->data.key : -1, cur->leftChild->rightChild != NULL ? cur->leftChild->rightChild->data.key : -1);
			cur->leftChild->print_check = 1;
		}
		if (cur->rightChild &&cur->rightChild->print_check == 0) {
			q.push(cur->rightChild);
			printf("%d(%d %d %d) ", cur->rightChild->data.key, cur->rightChild->bitNumber, cur->rightChild->leftChild != NULL ? cur->rightChild->leftChild->data.key : -1, cur->rightChild->rightChild != NULL ? cur->rightChild->rightChild->data.key : -1);
			cur->rightChild->print_check = 1;
		}
	}


}

int main() {

	
	int n_input;
	cin >> n_input;

	for (int i = 0; i < n_input; i++) {
		element input;
		cin >> input.key;
		insert(&root, input);
	
	}
	q.push(root);
	printf("%d(%d %d %d)\n", root->data.key, root->bitNumber, root->leftChild != NULL ? root->leftChild->data.key : -1, root->rightChild != NULL ? root->rightChild->data.key : -1);
	root->print_check = 1;
	printLevelOrder(root);

}