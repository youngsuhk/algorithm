//#include <stdio.h>
//int dp[1000000];
//int N;
//int min(int a, int b)
//{
//	if (a < b)
//		return a;
//	else
//		return b;
//}
//int fun(int N)
//{
//	if (N == 1)
//		return ;
//	if (N == 2)
//		return 1;
//	if (N == 3)
//		return 1;
//	if (N % 2 == 0 && N % 3 == 0)
//	{	
//		if (dp[N / 3] == 0) {
//			dp[N / 3] = fun(N / 3);
//		}
//		if (dp[N / 2] == 0) {
//			dp[N / 2] = fun(N / 2);
//		}
//		if (dp[N - 1] == 0)
//		{
//			dp[N - 1] = fun(N - 1);
//		}
//		return dp[N] = min(min(dp[N - 1] + 1, dp[N / 2] + 1), dp[N / 3] + 1);
//	}else if (N % 2 == 0)
//	{
//		if (dp[N / 2] == 0) {
//			dp[N / 2] = fun(N / 2);
//		}
//		if (dp[N - 1] == 0)
//		{
//			dp[N-1]=fun(N - 1);
//		}
//		
//		return dp[N] = min(dp[N - 1] + 1, dp[N / 2] + 1);
//	}else if (N % 3 == 0)
//	{
//		if (dp[N / 3] == 0) {
//			dp[N / 3] = fun(N / 3);
//		}
//		if (dp[N - 1] == 0)
//		{
//			dp[N - 1] = fun(N - 1);
//		}
//		
//		return dp[N] = min(dp[N - 1] + 1, dp[N / 3] + 1);
//	}else
//	{
//		if (dp[N - 1] == 0)
//		{
//			dp[N - 1] = fun(N - 1);
//		}
//		return dp[N] = dp[N - 1] + 1;
//	}
//}
//int main()
//{
//	scanf("%d", &N);
//	fun(N);
//	printf("%d", dp[N]);
//}