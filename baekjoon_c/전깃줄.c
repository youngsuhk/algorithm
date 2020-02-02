//#include <stdio.h>
//
//int arr[2][501];
//int temp[2][501];
//int dp[101];
//
//int Max(int a, int b)
//{
//	if (a < b)return b;
//	else return a;
//}
//
//int main()
//{
//	int N;
//	int min = 600;
//	int min_num;
//	int max = 0;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%d %d", &temp[0][i],&temp[1][i]);
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++)
//		{
//			if (temp[0][j] < min)
//			{
//				min = temp[0][j];
//				min_num = j;
//			}
//		}
//		arr[0][i] = temp[0][min_num];
//		arr[1][i] = temp[1][min_num];
//		temp[0][min_num] = 9999;
//		min = 600;
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[1][i] > arr[1][j])
//			{
//				dp[i] = Max(dp[i], dp[j] + 1);
//			}
//		}
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		if (max < dp[i])
//			max = dp[i];
//	}
//	printf("%d", N-max);
//}