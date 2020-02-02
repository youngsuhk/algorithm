//#include <stdio.h>
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
//	dp[2] = 1, dp[3] = 1;
//	for (int i = 4; i <= N; i++)
//	{
//		dp[i] = dp[i - 1] + 1;
//		if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
//		if (i % 3 == 0)dp[i] = min(dp[i], dp[i / 3] + 1);
//	}
//	printf("%d", dp[N]);
//}