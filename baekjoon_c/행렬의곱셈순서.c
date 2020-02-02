//#include <stdio.h>
//
//int arr[2][501];
//unsigned int dp[501][501];
//int N;
//int min(int a, int b)
//{
//	if (a < b)return a;
//	else return b;
//}
//int fun()
//{
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%d %d", &arr[0][i], &arr[1][i]);
//	}
//	for (int d = 1; d < N; d++)
//	{
//		for (int tx = 1; tx + d <= N; tx++)
//		{
//			int ty = tx + d;
//			dp[tx][ty] = min(dp[tx][ty-1]+ arr[0][tx]*arr[1][ty-1]*arr[1][ty], dp[tx + 1][ty] + arr[0][tx]*arr[0][tx+1]*arr[1][ty]);	
//		}
//	}
//	return dp[1][N];
//}
//int main()
//{
//	printf("%u\n",fun());
//}