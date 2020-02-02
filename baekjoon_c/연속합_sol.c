//#include <stdio.h>
//int dp[100001];
//int arr[100001];
//
//int Max(int a, int b)
//{
//	if (a < b)
//		return b;
//	else return a;
//}
//int main()
//{
//	int N;
//	int max = -1000;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	dp[0] = arr[0];
//	for (int i = 1; i < N; i++) {
//		dp[i] = Max(dp[i - 1] + arr[i], arr[i]);
//		max = Max(max, dp[i]);
//	}
//	max = Max(max, dp[0]);
//	printf("%d\n", max);
//}