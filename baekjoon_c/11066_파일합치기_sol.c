//#include <stdio.h>
//
//int min(int a, int b) {
//	if (a < b)return a;
//	else return b;
//}
//int dp[501][501];
//int cost[501];
//int sum[501];
//int T, N, i;
//int main()
//{
//	scanf("%d", &T);
//	while (T--) {
//		scanf("%d", &N);
//		for (i = 1; i <= N; ++i) {
//			scanf("%d", &cost[i]);
//			sum[i] = sum[i - 1] + cost[i];
//		}
//		for (int d = 1; d < N; ++d) {
//			for (int tx = 1; tx + d <= N; ++tx) {
//				int ty = tx + d;
//				dp[tx][ty] = 99999;
//
//				for (int mid = tx; mid < ty; ++mid)
//					dp[tx][ty] = min(dp[tx][ty], dp[tx][mid] + dp[mid + 1][ty] + sum[ty] - sum[tx - 1]);
//			}
//		}
//		printf("%d\n", dp[1][N]);
//	}
//	return 0;
//}