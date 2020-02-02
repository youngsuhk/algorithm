//#include <stdio.h>
//
//int dp[1001][3];
//
//int min(int a, int b)
//{
//	if (a < b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		int R, G, B;
//		scanf("%d %d %d", &R, &G, &B);
//		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + R;
//		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + G;
//		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + B;
//	}
//	printf("%d", min(dp[N][0], (min(dp[N][1], dp[N][2]))));
//}