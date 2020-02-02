//#include <stdio.h>
///*수열 S가 어떤 수 Sk를 기준으로 S1 < S2 < ... Sk-1 < Sk > Sk+1 > ... SN-1 > SN을 만족한다면, 그 수열을 바이토닉 수열이라고 한다.*/
//int dp_up[1001];
//int dp_down[1001];
//int arr[1001];
//int Max(int a, int b)
//{
//	if (a < b)
//		return b;
//	else
//		return a;
//}
//
//int main() {
//	int N;
//	int cnt = 0;
//	int max = 0;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				dp_up[i] = Max(dp_up[i], dp_up[j] + 1);
//			}
//		}
//	}
//	for (int i = N; i >= 1; i--)
//	{
//		for (int j = N+1; j >=i; j--)
//		{
//			if (arr[i] > arr[j])
//			{
//				dp_down[i] = Max(dp_down[i], dp_down[j] + 1);
//			}
//		}
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		if (max < dp_up[i]+ dp_down[i])
//			max = dp_up[i]+ dp_down[i];
//	}
//	printf("%d\n", max-1);
//}