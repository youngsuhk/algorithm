////�޸� �ʰ����� ����!
//#include <stdio.h>
//int N, K;
////N ���� ���� ����
////K �������� ��ġ
//int arr[101];
//int dp[101][100001];
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
//				dp[i][j] = dp[i - 1][j];
//			}
//			else if (j == arr[i])
//			{
//				dp[i][j] = dp[i - 1][j] + 1;
//			}
//			else
//			{
//					dp[i][j] = dp[i-1][j] + dp[i][j - arr[i]];
//			}
//		}
//	}
//	printf("%d", dp[N][K]);
//}