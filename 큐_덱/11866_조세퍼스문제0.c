//#include <stdio.h>
//
//int q[1000001];
//int N,K;
//
//int front;
//int back;
//int push(int num)
//{
//	
//	q[back++] = num;
//}
//int pop()
//{
//
//	return q[front++];
//}
//
//int main()
//{
//	scanf("%d %d", &N,&K);
//	for (int i = 1; i <= N; i++)
//	{
//		push(i);
//	}
//	printf("<");
//	while (back-front!=1)
//	{
//		for (int i = 1; i < K; i++)
//		{
//			push(pop());
//		}
//		printf("%d, ",pop());
//	}
//	printf("%d>",pop());
//}