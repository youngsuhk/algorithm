//#include <stdio.h>
//int dp[100001];
//int cnt;
//int Max(int a, int b)
//{
//	if (a < b)
//		return b;
//	else return a;
//}
//int main()
//{
//	int N;
//	int a;
//	int sum = 0;
//	int max = -1000;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%d", &a);
//		if (sum < a*(-1))
//		{
//			dp[i] = Max(dp[i - 1], sum);
//			sum = 0;
//		}
//		else
//		{
//			sum = sum + a;
//			dp[i] = Max(dp[i - 1], sum);
//		}
//		if (a >= 0)
//		{
//			cnt++;
//		}
//		else
//		{
//			if (max < a)
//				max = a;
//		}
//	}
//	if (cnt > 0)
//	{
//		printf("%d", dp[N]);
//	}
//	else
//		printf("%d", max);
//}