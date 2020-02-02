//#include <stdio.h>
//
//int stack[100001];
//char q[100001];
//int size;
//void push(int num)
//{
//	stack[++size] = num;
//}
//int pop()
//{
//	if (size == 0)return -1;
//	return stack[size--];
//}
//int N;
//int cnt;
//int cnt2;
//int main()
//{
//	int input_num;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &input_num);
//		while (stack[size]<input_num) {
//			push(++cnt);
//			q[++cnt2] = '+';
//			if (cnt > N)break;
//		}
//		while (stack[size]>input_num) {
//			cnt--;
//			if (cnt < 0)break;
//		}
//		if (stack[size] == input_num)
//		{
//			pop();
//			q[++cnt2] = '-';
//		}
//		if (cnt < 0)break;
//		if (cnt > N)break;
//	}
//	if (cnt<0 || cnt>N) {
//		printf("%s\n", "NO");
//	}
//	else
//	{
//		for (int i = 1; i <= cnt2; i++)
//		{
//			printf("%c\n", q[i]);
//		}
//	}
//		return 0;
//}