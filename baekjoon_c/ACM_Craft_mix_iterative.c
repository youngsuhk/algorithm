//#include <stdio.h>
//int N; //최대 1000
//int D[1001]; //건물 짓는데 걸리는 시간
//int dp[1001][10]; //건물 짓는 조건
//int cnt[100];
//int max(int a, int b)
//{
//	if (a < b)
//		return b;
//	else
//		return a;
//}
//int totalTime(int destination)
//{
//	int result = 0;
//	int time = 0;
//	if (destination == 0) return;
//	for (int i = 0; i <cnt[destination]; i++)
//		time = max(time, totalTime(dp[i][destination]));
//	return result = time + D[destination];
//}
//int main(void)
//{
//	int T;
//	scanf("%d", &T);
//	for (int i = 0; i < T; i++)
//	{
//		int K, W, X, Y;
//		scanf("%d %d", &N, &K);
//		for (int j = 1; j <= N; j++)
//			scanf("%d", &D[j]);
//		for (int j = 0; j < K; j++)
//		{
//			scanf("%d %d", &X, &Y);
//			dp[cnt[Y]][Y] = X;
//			cnt[Y] = cnt[Y] + 1;
//		}
//		scanf("%d", &W);
//		printf("%d\n", totalTime(W));
//	}
//	return 0;
//}