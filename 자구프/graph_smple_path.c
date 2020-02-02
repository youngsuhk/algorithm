//#include <stdio.h>
//#include <stdlib.h>
//
//#define NODE_MAX 26
//#define FILE_STR_MAX 256
//
//const char A = 'A';
//
//typedef struct node {
//	int value;
//	struct node *next;
//} Node;
//
//Node nodes[NODE_MAX];
//int visited[NODE_MAX] = { 0, };
//int node_num;
//char source, dest;
//
//char stack[NODE_MAX];
//int stack_size = 0;
//int path_cnt = 0;
//FILE *file_out;
//
//
//void inputFile(char *file_name);
//void outputFile();
//void initNodes();
//void freeNodes();
//Node* createNode(int value);
//void dfs(int now); // �ٽ� �Լ�
//
//
//int main() {
//	
//	int edge_num, i;
//	char s, d;
//	Node *temp;
//
//	scanf( "%d %d %c %c", &node_num, &edge_num, &source, &dest);
//	source -= A;
//	dest -= A;
//	initNodes();
//	for (i = 0; i < edge_num; i++) {
//		scanf( " %c %c", &s, &d);
//		s -= A;
//		d -= A;
//		// �׻� ����Ʈ�� �߰�
//		temp = createNode(d);
//		temp->next = nodes[s].next->next;
//		nodes[s].next->next = temp;
//	}
//	dfs(source);
//	//fprintf(file_out, "%d\n", path_cnt);
//	printf("%d\n", path_cnt);
//	//fclose(file_out);
//	freeNodes();
//	return 0;
//}
//
//
//// stack�� ���� ����� ���Ͽ� ���
//void outputFile() {
//	int i;
//	for (i = 0; i < stack_size; i++)
//		printf("%c", stack[i]);
//	printf( "\n");
//}
//
//// ��� ���� �ʱ�ȭ
//void initNodes() {
//	int i;
//	for (i = 0; i < node_num; i++) {
//		nodes[i].value = i;
//		nodes[i].next = createNode(i); // dummy node
//	}
//}
//
//// ��� ���� ���� ����
//void freeNodes() {
//	int i;
//	Node *temp;
//	for (i = 0; i < node_num; i++) {
//		while (nodes[i].next != NULL) {
//			temp = nodes[i].next;
//			nodes[i].next = nodes[i].next->next;
//			free(temp);
//		}
//	}
//}
//
//// ��� �����Ҵ�
//Node* createNode(int value) {
//	Node *node = (Node*)malloc(sizeof(Node));
//	node->value = value;
//	node->next = NULL;
//	return node;
//}
//
//// Depth-first search: �湮�� ������ stack�� ����� �״´�
//// �湮 Ȯ���� visited �迭�� Ȯ��
//void dfs(int now) {
//	Node *temp;
//
//	if (visited[now])
//		return;
//
//	visited[now] = 1;
//	stack[stack_size] = now + A;
//	stack_size++;
//
//	if (now == dest) {
//		outputFile();
//		path_cnt++;
//	}
//
//	// ��� edge iteration
//	for (temp = nodes[now].next->next; temp != NULL; temp = temp->next)
//		dfs(temp->value);
//
//	visited[now] = 0;
//	stack_size--;
//};