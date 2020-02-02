//#include <stdio.h>
//int dp[10][1 << 10];
//int main()
//{
//	for (int j = 1; j <= 9; ++j)
//		dp[j][1 << j] = 1;
//	for (int i = 0; i < 10; i++) {
//		for (int k = 0; k < 1023; k++)
//			if (i == 0)
//				dp[0][k | (1 << 0)] = (dp[0][k | (1 << 0)] + dp[1][k]);
//			else if (i == 9)
//				dp[9][k | (1 << 9)] = (dp[9][k | (1 << 9)] + dp[8][k]);
//			else {
//				dp[i][k | (1 << i)] = (dp[i][k | (1 << i)] + dp[i - 1][k]);
//				dp[i][k | (1 << i)] = (dp[i][k | (1 << i)] + dp[i + 1][k]);
//			}
//	}
//
//}