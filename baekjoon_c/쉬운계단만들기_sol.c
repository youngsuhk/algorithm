//#include <stdio.h>
//#define mod 1000000000
//int dp[101][10];
//int main(){
//	int N;
//	int sum=0;
//	scanf("%d", &N);
//	
//	for (int i = 0; i < 10; i++)
//		dp[1][i] = 1;
//	for (int i = 2; i <= N; i++)
//	{
//		for (int j = 0; j <= 9; j++)
//		{
//			if (j == 0)
//				dp[i][0] = dp[i - 1][1];
//			else if (j == 9)
//				dp[i][9] = dp[i - 1][8];
//			else
//				dp[i][j] = (dp[i-1][j - 1] + dp[i-1][j + 1])%mod;
//		}
//		printf("%d : ", i);
//		for (int j = 0; j < 10; j++)
//			printf("%d ", dp[i][j]);
//		printf("\n");
//	}
//	for (int i = 1; i <= 9; i++)
//	{
//		sum =( sum+ dp[N][i] )% 1000000000;
//	}
//	printf("%d", sum );
//}
