//#include <stdio.h>
//int dp[1000001];
//int N;
//int main()
//{
//	scanf("%d", &N);
//	dp[1] = 1;
//	dp[2] = 2;
//	for (int i = 3; i <= N; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i - 2];
//		dp[i] = dp[i] % 15746;
//	}
//	printf("%d", dp[N]);
//}