//#include <stdio.h>
//#define mod 1000000000
//int dp[2][11] = { {1,1,1,1,1,1,1,1,1,1,0},{1,1,1,1,1,1,1,1,1,1,0} };
//
//int main(){
//	int N;
//	int sum=0;
//	scanf("%d", &N);
//	
//	for (int i = 1; i < N; i++)
//	{
//		for (int j = 1; j <= 9; j++)
//		{
//			dp[1][j] = (dp[0][j - 1] + dp[0][j + 1])%mod;
//		}
//		for (int j = 1; j <= 9; j++)
//		{
//			dp[0][j] = dp[1][j];
//		}
//		for (int j = 1; j <= 4; j++)
//		{
//			dp[0][j] = dp[1][9-j];
//		}
//	}
//	for (int i = 1; i <= 9; i++)
//	{
//		sum += dp[0][i];
//		sum = sum % 1000000000;
//	}
//	printf("%d", sum );
//}
