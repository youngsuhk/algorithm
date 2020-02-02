//#include <stdio.h>
///*
//arr[i] = 소설의 i번째 장의 크기라 하고, 
//다이나믹 프로그래밍 기법을 통해, 점화식을 세우기 위한 배열 dp[i][j]를 정의해보자.
//dp[i][j]? = i번째 장부터 j번째 장까지 합치는데 드는 최소한의 비용.
//따라서 dp[i][i]?=?novel[i], dp[i][i+1] = novel[i]+novel[i+1] 임을 쉽게 알 수 있다.
//또한 dp[i][j]?를 두 그룹으로 나누는 기준이 되는 k에 대해(i<=k<j) 다음 점화식을 생각할 수 있다.
//dp[i][j]?=?min(i?<=?k?<?j){dp[i][k]?+?dp[k+1][j]}?+?psum[i][j] (psum[i][j] 는 novel[i][j] 의 i부터 j까지의 부분합)
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