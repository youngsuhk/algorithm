//// 2014105041 서영석
//#include <stdio.h>
//#include <stdlib.h>
//#define M 3
//
//typedef struct _node {
//	int    n; 
//	int    keys[M - 1]; 
//	struct _node *p[M]; 
//} node;
//node *root = NULL;
//
//typedef enum KeyStatus {
//	Duplicate,
//	SearchFailure,
//	Success,
//	InsertIt,
//	LessKeys,
//} KeyStatus;
//
//void insert(int key);
//void display(FILE *f_output, node *root, int);
//KeyStatus ins(node *r, int x, int* y, node** u);
//int searchPos(int x, int *key_arr, int n);
//
//int main() {
//	FILE *f_input;
//	FILE *f_output;
//	int key;
//	int choice;
//	int n;
//
//	fscanf(f_input,"%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		fprintf(f_output,"Inserting : ");
//		fscanf(f_input,"%d", &key);
//		insert(key);
//		display(f_output,root, 0);
//	}
//	return 0;
//}
//void insert(int key) {
//	node *newnode;
//	int upKey;
//	KeyStatus value;
//	value = ins(root, key, &upKey, &newnode);
//	
//	if (value == InsertIt) {
//		node *uproot = root;
//		root = (node*)malloc(sizeof(node));
//		root->n = 1;
//		root->keys[0] = upKey;
//		root->p[0] = uproot;
//		root->p[1] = newnode;
//	}
//}
//KeyStatus ins(node *ptr, int key, int *upKey, node **newnode) {
//	node *newPtr, *lastPtr;
//	int pos, i, n, splitPos;
//	int newKey, lastKey;
//	KeyStatus value;
//	if (ptr == NULL) {
//		*newnode = NULL;
//		*upKey = key;
//		return InsertIt;
//	}
//	n = ptr->n;
//	pos = searchPos(key, ptr->keys, n);
//	if (pos < n && key == ptr->keys[pos])
//		return Duplicate;
//	value = ins(ptr->p[pos], key, &newKey, &newPtr);
//	if (value != InsertIt)
//		return value;
//	/*만약 노드 의 갯수가 M-1보다 작을경우 */
//	if (n < M - 1) {
//		pos = searchPos(newKey, ptr->keys, n);
//		/*새로운 key를 넣기위해 key와 포인터를 이동*/
//		for (i = n; i>pos; i--) {
//			ptr->keys[i] = ptr->keys[i - 1];
//			ptr->p[i + 1] = ptr->p[i];
//		}
//		/*key를 정확한 위치에 삽입*/
//		ptr->keys[pos] = newKey;
//		ptr->p[pos + 1] = newPtr;
//		++ptr->n; /*노드의 key 갯수 증가*/
//		return Success;
//	}
//	 /*노드의 키 개수가 최대이고 삽입 할 노드의 위치가 마지막일 경우*/
//	if (pos == M - 1) {
//		lastKey = newKey;
//		lastPtr = newPtr;
//	}
//	else {
//		lastKey = ptr->keys[M - 2];
//		lastPtr = ptr->p[M - 1];
//		for (i = M - 2; i>pos; i--) {
//			ptr->keys[i] = ptr->keys[i - 1];
//			ptr->p[i + 1] = ptr->p[i];
//		}
//		ptr->keys[pos] = newKey;
//		ptr->p[pos + 1] = newPtr;
//	}
//	splitPos = (M - 1) / 2;
//	(*upKey) = ptr->keys[splitPos];
//
//	(*newnode) = (node*)malloc(sizeof(node));/*오른쪽 노드 스플릿*/
//	ptr->n = splitPos; 
//	(*newnode)->n = M - 1 - splitPos;
//	for (i = 0; i < (*newnode)->n; i++) {
//		(*newnode)->p[i] = ptr->p[i + splitPos + 1];
//		if (i < (*newnode)->n - 1)
//			(*newnode)->keys[i] = ptr->keys[i + splitPos + 1];
//		else
//			(*newnode)->keys[i] = lastKey;
//	}
//	(*newnode)->p[(*newnode)->n] = lastPtr;
//	return InsertIt;
//}
//void display(FILE *f_output,node *ptr, int blanks) {
//	if (ptr) {
//		int i;
//		if (ptr->p[0] == 0) {
//			fprintf(f_output,"[%d] : n = %d,(%d)", ptr, ptr->n, -1);
//		}
//		else
//			fprintf(f_output,"[%d] : n = %d,(%d)", ptr, ptr->n, ptr->p[0]);
//		for (i = 0; i < ptr->n; i++)
//		{
//			if (ptr->p[i + 1] == 0) {
//				fprintf(f_output,"(%d,%d) ", ptr->keys[i], -1);
//			}
//			else
//				fprintf(f_output,"(%d,%d) ", ptr->keys[i], ptr->p[i + 1]);
//		}
//		fprintf(f_output,"\n");
//		for (i = 0; i <= ptr->n; i++)
//			display(f_output,ptr->p[i], blanks + 10);
//	}
//}
//int searchPos(int key, int *key_arr, int n) {
//	int pos = 0;
//	while (pos < n && key > key_arr[pos])
//		pos++;
//	return pos;
//}
//
//
