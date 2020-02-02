//#include <stdio.h>
//#include <string.h>
//int n;
//int q[1000001];
//int back;
//int front;
//void push(int input_num)
//{
//	q[back++] = input_num;
//}
//int pop()
//{
//	if (back == front)return -1;
//	return q[front++];
//}
//int empty()
//{
//	if (back == front)return 1;
//	else return 0;
//}
//
//int main()
//{
//	int num;
//	scanf("%d", &n);
//	
//	for (int i = 1; i <= n; i++)
//	{
//		push(i);
//	}
//	while (back - front != 1)
//	{
//		pop();
//		push(pop());
//	}
//	printf("%d", pop());
//		
//}