//#include    <stdio.h>
//#define min(x,y) ((x)<(y)?(x):(y))
//
//
//int arr[2][501]; // 0 : r , 0 : c
//int dp[501][501];
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	for (int i = 1; i <= N; ++i)
//		scanf("%d%d", &arr[0][i], &arr[1][i]);
//
//	for (int i = N; i > 0; --i)
//	{
//		for (int j = i + 1; j <= N; ++j)
//		{
//			dp[i][j] = 2147483647;
//			for (int k = i; k <= j; ++k)
//				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + (arr[0][i] * arr[1][k] * arr[1][j]));
//		}
//	}
//
//	printf("%d", dp[1][N]);
//}