//#include <stdio.h>
//
//int K,num;
//int stack[100001];
//int size = 0;
//int push(int num)
//{
//	stack[++size]=num;
//}
//int pop()
//{
//	if (size == 0)return;
//	stack[size] = 0;
//	size--;
//}
//int main()
//{
//	int sum = 0;
//	scanf("%d", &K);
//	for (int i = 0; i < K; i++)
//	{
//		scanf("%d", &num);
//		if (num == 0) pop();
//		else push(num);
//	}
//	for (int i = 1; i <= size; i++)
//		sum += stack[i];
//	printf("%d", sum);
//}