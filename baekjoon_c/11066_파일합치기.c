//#include <stdio.h>
///*
//arr[i] = �Ҽ��� i��° ���� ũ��� �ϰ�, 
//���̳��� ���α׷��� ����� ����, ��ȭ���� ����� ���� �迭 dp[i][j]�� �����غ���.
//dp[i][j]? = i��° ����� j��° ����� ��ġ�µ� ��� �ּ����� ���.
//���� dp[i][i]?=?novel[i], dp[i][i+1] = novel[i]+novel[i+1] ���� ���� �� �� �ִ�.
//���� dp[i][j]?�� �� �׷����� ������ ������ �Ǵ� k�� ����(i<=k<j) ���� ��ȭ���� ������ �� �ִ�.
//dp[i][j]?=?min(i?<=?k?<?j){dp[i][k]?+?dp[k+1][j]}?+?psum[i][j] (psum[i][j] �� novel[i][j] �� i���� j������ �κ���)
//*/
//int arr[501];
//int dp[501][501];
//int sum[501];
//int N,i,j;
//int min(int a, int b)
//{
//	if (a < b)return a;
//	else return b;
//}
//int max(int a, int b)
//{
//	if (a > b)return a;
//	else return b;
//}
//int fun()
//{
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum[i] = sum[i - 1] + arr[i];
//	}
//	for (int d = 1; d < N; d++) {
//		for (int tx = 1; tx+d <=N; tx++)
//		{
//			int ty = tx + d;
//			dp[tx][ty] = 987654321;
//			for (int mid = tx; mid < ty; mid++)
//			{
//				dp[tx][ty] = min(dp[tx][ty], dp[tx][mid]+dp[mid+1][ty]+sum[ty]-sum[tx-1]);
//			}
//		}
//	}
//	return dp[1][N];
//}
//int main()
//{
//	int T;
//	
//	scanf("%d", &T);
//	for (int t = 0; t < T; t++)
//	{
//		printf("%d",fun());
//	}
//}