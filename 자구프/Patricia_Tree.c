//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct element {
//	int key;
//}element;
//typedef struct patriciaTree patricia;
//
//typedef struct patriciaTree {
//	int bitNumber;
//	element data;
//	patricia *leftChild, *rightChild;
//}patriciaTree;
//
//
//patricia *root;
//
//patricia* search(patricia *t, unsigned k)
//{/* search the Patricia tree t; return the last node encounted; if k is the key in this last
// node, the search is successful */
//	patricia *currentNode, *nextNode;
//	if (!t) return NULL; /*empty tree */
//	nextNode = t->leftChild;
//	currentNode = t;
//	while (nextNode->bitNumber > currentNode->bitNumber) {
//		currentNode = nextNode;
//		nextNode = (k== nextNode->bitNumber) ?	nextNode->rightChild : nextNode->leftChild;
//	}
//	return nextNode;
//}
//
//void insert(patricia *t, element theElement)
//{ /* insert theElement into the Patricia tree *t */
//	patricia *current, *parent, *lastNode, *newNode;
//	int i;
//	
//	if (!(t)) {/* empty tree */
//		t = (patriciaTree*)malloc(sizeof(patriciaTree));
//		
//		(t)->bitNumber = 0;
//		(t)->data = theElement;
//		(t)->leftChild = t;
//	}
//	lastNode = search(t, theElement.key);
//	if (theElement.key == lastNode->data.key) {
//		fprintf(stderr, "The key is in the tree.Insertion fails.");
//		exit(1);
//	}
//	/* find the first bit where theElement.key and lastNode¡ædata.key differ */
//	for (i = 1; ((theElement.key == i) ? 1 : 0) == ((lastNode->data.key == i) ? 1 : 0); i++);
//		/* search tree using the first i 1 bits */
//	current = t->leftChild;
//	parent = t;
//		while (current->bitNumber > parent->bitNumber && current->bitNumber < i) {
//			parent = current;
//			current = (theElement.key == current->bitNumber) ? current->rightChild : current->leftChild;
//		}
//	
//	/* insert theElement as a child of parent */
//	newNode = (patriciaTree*)malloc(sizeof(patriciaTree));
//	newNode->data = theElement; newNode->bitNumber = i;
//	newNode->leftChild = (theElement.key== i) ? current : newNode;
//	newNode->rightChild = (theElement.key== i) ? newNode : current;
//	if (current == parent->leftChild)
//		parent->leftChild = newNode;
//	else 
//		parent->rightChild = newNode;
//}
//element* creat_newel(int key)
//{
//	element *newel;
//	newel = (element*)malloc(sizeof(element));
//	newel->key = key;
//	return newel;
//}
//int main()
//{
//	
//	element *new;
//	int n,input;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &input);
//		new = creat_newel(input);
//		insert(root, *new);
//	}
//	
//}