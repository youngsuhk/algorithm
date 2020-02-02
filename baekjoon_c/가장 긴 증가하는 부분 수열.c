//#include <stdio.h>
//
//int dp[1001];
//int arr[1001];
//int Max(int a, int b)
//{
//	if (a < b)
//		return b;
//	else
//		return a;
//}
//int main()
//{
//	int N;
//	int cnt=0;
//	int max = 0;
//	scanf("%d", &N);
//	for (int i=1; i <= N; i++)
//	{
//		scanf("%d", &arr[i]);
//		for (int j = 0; j <= i; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				//if (cnt <= dp[j]) {
//				//	cnt++;
//				//	dp[i] = cnt;
//				//}
//				dp[i]=Max(dp[i], dp[j] + 1);
//			}
//			
//		}
//		cnt = 0;
//		max = Max(max, dp[i]);
//	}
//	/*for (int i = 1; i <= N; i++)
//	{
//		if (max < dp[i])
//			max = dp[i];
//	}*/
//	printf("%d", max);
//}