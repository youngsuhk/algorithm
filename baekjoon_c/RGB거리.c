//#include <stdio.h>
//
//int dp[1001][3], N;
//
//int MIN(int a, int b) {
//
//	return a < b ? a : b;
//}
//
//int main() {
//	scanf("%d", &N);
//	for (int i = 1; i <= N; ++i) {
//		int R, G, B;
//		scanf("%d %d %d", &R, &G, &B);
//		dp[i][0] = MIN(dp[i - 1][1], dp[i - 1][2]) + R;
//		dp[i][1] = MIN(dp[i - 1][0], dp[i - 1][2]) + G;
//		dp[i][2] = MIN(dp[i - 1][0], dp[i - 1][1]) + B;
//	}
//	printf("%d", MIN(dp[N][0], MIN(dp[N][1], dp[N][2])));
//}
