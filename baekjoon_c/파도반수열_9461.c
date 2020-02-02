//#include <stdio.h>
//int T, N;
//long long dp[101];
//
//int main()
//{
//	dp[1] = 1;
//	dp[2] = 1;
//	dp[3] = 1;
//	dp[4] = 2;
//	dp[5] = 2;
//	scanf("%d", &T);
//	for (int i = 6; i <= 100; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i - 5];
//	}
//	
//	for (int i = 1; i <= T; i++)
//	{
//		scanf("%d", &N);
//		printf("%lld\n", dp[N]);
//	}
//	//long long 형을 사용할떈 꼭 !! %lld를 사용해줄것 !! 
//}