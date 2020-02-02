//#include <stdio.h>
//
//int dp[10001];
//int arr[10001];
//
//int Max(int a,int b)
//{
//	if (a < b)
//		return b;
//	else
//		return a;
//}
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 1; i <=N+1; i++)
//	{
//		dp[i] = Max(Max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]),dp[i-1]);
//	}
//	printf("%d", dp[N+1]);
//}