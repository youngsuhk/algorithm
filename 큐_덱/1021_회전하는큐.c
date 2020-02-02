//#include <stdio.h>
//
//int N, M;
//int front, back=-1;
//int num;
//int cnt;
//int q[100000];
//int push(int num)
//{
//	q[++back] = num;
//}
//int pop()
//{
//	return q[front++];
//}
// int main()
//{
//	scanf("%d %d", &N, &M);
//	
//	for (int i = 1; i <= N; i++)
//	{
//		push(i);
//	}
//	for (int i = 0; i < M; i++)
//	{
//		scanf("%d", &num);
//		if (num - 1 - front < back - num+1)
//		{
//			while (front!=num-1) {
//			push(pop());
//			cnt++;
//			}
//			pop();
//		}
//		else
//		{
//			while (back-num !=-2) {
//				q[(front+N-1)%N] = q[--back];
//				cnt++;
//			}
//			pop();
//		}
//	}
//	printf("%d", cnt);
//}