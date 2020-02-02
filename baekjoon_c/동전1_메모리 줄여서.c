//#include <stdio.h>
//int N, K;
////N 동전 종류 갯수
////K 만들고싶은 가치
//int arr[101];
//int dp[100001];
//int max(int a, int b)
//{
//	if (a < b)return b;
//	else return a;
//}
//int main()
//{
//	scanf("%d %d", &N, &K);
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= K; j++)
//		{
//			if (arr[i] > j)
//			{
//				dp[j] = dp[j];
//			}
//			else if (j == arr[i])
//			{
//				dp[j] = dp[j] + 1;
//			}
//			else
//			{
//				dp[j] = dp[j] + dp[j - arr[i]];
//			}
//		}
//	}
//	printf("%d", dp[K]);
//}