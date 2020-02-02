//#include <stdio.h>
//int dp[301], array[301];
//int Max(int a, int b)
//{
//	if (a < b)
//		return b;
//	else
//		return a;
//}
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%d", &array[i]);
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		dp[i] = Max(dp[i-2]+array[i] ,dp[i-3]+array[i-1]+array[i]  );	
//	}
//	printf("%d", dp[N]);
//}