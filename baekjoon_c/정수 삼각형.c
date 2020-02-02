//#include <stdio.h>
//dp[501][1000];
//Max(int a, int b)
//{
//	if (a < b)
//		return b;
//	else
//		return a;
//}
//int main()
//{
//	int N,n,max=0;
//	scanf("%d", &N);
//	for (int i = 1; i <=N; i++)
//	{
//		for (int j = N-i; j <N ; j++)
//		{
//			scanf("%d", &n);
//			dp[i][j] = Max(dp[i - 1][j], dp[i - 1][j+1]) + n;
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		max = Max(max, dp[N][i]);
//	}
//	printf("%d", max);
//}