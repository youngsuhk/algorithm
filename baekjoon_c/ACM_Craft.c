//#include <stdio.h>
//int N; //�ִ� 1000
//int D[1001]; //�ǹ� ���µ� �ɸ��� �ð�
//int dp[1001][100]; //�ǹ� ���� ����
//int max(int a, int b)
//{
//	if (a < b)
//		return b;
//	else
//		return a;
//}
//int totalTime(int destination)
//{
//	int result =0;
//	int time = 0;
//	for (int i = 1; i <= N; i++)
//		if (dp[i][destination])
//			time = max(time, totalTime(i));
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
//			dp[X][Y] = 1;
//		}
//		scanf("%d", &W);
//		printf("%d\n", totalTime(W));
//	}
//	return 0;
//}