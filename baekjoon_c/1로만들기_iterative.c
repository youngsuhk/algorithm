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
//int main()
//{
//	scanf("%d", &N);
//	dp[1] = 0;
//	dp[2] = 1;
//	dp[3] = 1;
//	for (int i = 4; i <= N; i++)
//	{
//		if (i % 2 == 0 && i % 3 == 0)
//		{
//			dp[i] = min(min(dp[i - 1] + 1, dp[i / 2] + 1), dp[i / 3] + 1);
//		}
//		else if (i % 3 == 0)
//		{
//			dp[i] = min(dp[i - 1] + 1, dp[i / 3] + 1);
//		}
//		else if (i % 2 == 0)
//		{
//			dp[i] = min(dp[i - 1] + 1, dp[i / 2] + 1);
//		}
//		else {
//			dp[i] = dp[i - 1] + 1;
//		}
//	}
//		printf("%d\n", dp[N]);
//}