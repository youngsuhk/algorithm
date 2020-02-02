//#include <stdio.h>
//
//int heap[100];
//int heapsize;
//int S[100];
//void siftdown(int i)//shiftdown// 
//{
//	int  smallerchild;
//	int siftkey;
//	int parent;
//	int find = 1;
//	parent = i;
//	siftkey = heap[i];
//
//	while (2 * parent <= heapsize && find) {
//		if (2 * parent < heapsize && heap[2 * parent] >= heap[2 * parent + 1]) {
//			smallerchild = 2 * parent + 1;
//		}
//		else {
//			smallerchild = 2 * parent;
//		}
//		if (siftkey > heap[smallerchild]) {
//			heap[parent] = heap[smallerchild];
//			parent = smallerchild;
//		}
//		else
//			find = 0;
//	}
//	heap[parent] = siftkey;
//}
//
//void makeheap(int n) {
//	int i;
//	for (i = n / 2; i >= 1; i--) {
//		siftdown(i);
//	}
//}
//int delete()  // Θ(log n) 
//{
//	int keyout;
//	int root;
//	keyout = heap[1];
//	heap[1] = heap[heapsize];
//	heapsize = heapsize - 1;
//	siftdown(1);
//	root = keyout;
//	return root;
//}
//void removekeys(n)
//{
//	for (int i = 1; i <= n; i++) {
//		S[i] = delete();  //heapsort
//	}
//}
//void heapsort(n)
//{
//	makeheap(n);
//	removekeys(n);
//}
//
//void insert(int a) {
//	int i;
//
//	heapsize++;
//
//	i = heapsize;
//	while ((i >= 1) && (heap[i / 2] > a)) {
//		heap[i] = heap[i / 2];
//		i /= 2;
//	}
//	heap[i] = a;
//}
//void print_heap()
//{
//	for (int i = 1; i <= heapsize; i++) {
//		printf("%d ", heap[i]);
//	}
//	printf("\n");
//}
//int main(void) {
//	int n;
//	int i;
//	int temp_array[100];
//	//FILE *fp;
//	//fp = fopen("heap_output.txt", "w");
//
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		scanf("%d", &heap[i]);
//	}
//	heapsize = n;
//
//	makeheap(heapsize);
//
//	for (i = 1; i <= heapsize; i++) {
//		printf("%d ", heap[i]);
//	}
//	printf("\n");
//
//	for (i = 1; i <= heapsize; i++) {
//		temp_array[i] = heap[i];
//	}
//
//	heapsort(heapsize);
//	heapsize = n;
//	for (i = 1; i <= heapsize; i++) {
//		printf("%d ", S[i]);
//	}
//	printf("\n");
//	heapsize = n;
//	for (i = 1; i <= heapsize; i++) {
//		heap[i] = temp_array[i];
//	}
//
//	printf("Select menu and input the number(1:insert,2:delete,3:end)\n");
//	//delete -> insert 할때 q[front]때문에 문제 생김.
//	while (1)
//	{
//		int insert_n = 0;
//		scanf("%d", &n);
//		if (n == 3)break;
//		switch (n)
//		{
//		case 1:
//			scanf("%d", &insert_n);
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
//	return 0;
//}