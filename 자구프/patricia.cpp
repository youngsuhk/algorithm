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

// 해당 key 값에서 bitNumber번 째 값 반환
int bit(unsigned key, int bitNumber) {


	unsigned a = 1 << length - 1; // 1000 
	unsigned b = a >> bitNumber - 1; // 몇번쨰 비트인가

	// 해당 bit값 반환
	return key & (1 << bitNumber);
}
// 탐색 함수 주어진 key 값을 찾는다

Patricia search(Patricia t, unsigned k)
{
	Patricia currentNode, nextNode;

	// 루트가 비어있으면 에러처리
	if (!t) return NULL; /*empty tree */

						//  다음 노드 가지고와서
	nextNode = t->leftChild;
	currentNode = t;

	 //찾을때까지 가서 비교한번 후 반환
	while (nextNode->bitNumber > currentNode->bitNumber) {
		 //다음 노드 이동
		currentNode = nextNode;
		nextNode = (bit(k, nextNode->bitNumber)) ?
			nextNode->rightChild : nextNode->leftChild;
	}
	 //찾은 노드 반환
	return nextNode;
}

void insert(Patricia *t, element theElement)
{ /* insert theElement into the Patricia tree *t  */
	Patricia current, parent, lastNode, newNode;
	int i;

	 //트리가 비어있다면
	if (!(*t)) {
		// 할당 후 첫 노드
		*t = (Patricia)calloc(1, sizeof(patriciaTree));
		(*t)->bitNumber = 0; (*t)->data = theElement;
		(*t)->leftChild = *t; // lch는 자기 자신
		return;
	}

	// 만약 값이 있을 경우
	lastNode = search(*t, theElement.key);
	if (theElement.key == lastNode->data.key) {
		printf("해당 키가 이미 존재합니다!\n");
		//success = 0;
		return;
	}

	 //처음으로 다른 비트값의 위치 찾아오기
	for (i = 1; bit(theElement.key, i) == bit(lastNode->data.key, i); i++);

	// 탐색을 위한 세팅
	current = (*t)->leftChild;
	parent = *t;

	// 탐색
	while (current->bitNumber > parent->bitNumber && current->bitNumber < i) {
		parent = current;
		current = (bit(theElement.key, current->bitNumber)) ?
			current->rightChild : current->leftChild;
	}
	// 새로운 노드를 할당한 후
	newNode = (Patricia)calloc(1, sizeof(patriciaTree));
	newNode->data = theElement;
	newNode->bitNumber = i; // 위에서 체크한 값
	newNode->leftChild = (bit(theElement.key, i)) ? current : newNode;
	newNode->rightChild = (bit(theElement.key, i)) ? newNode : current;

	// 어디 연결할지 체크 후 연결
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