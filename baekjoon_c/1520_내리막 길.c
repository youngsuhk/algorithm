////���� �ذ� ���� �׷��� �ð��ʰ�!! ---> sol
//
//#include <stdio.h>
//int arr[501][501];
//int dp[501][501];
//int M, N;
//int cnt;
//int A[4] = { 1, 0, -1, 0 };
//int B[4] = { 0, 1, 0, -1 };
//int fun(int a,int b)
//{
//	if (a == M && b == N) return;
//	for (int i = 0; i < 4; i++)
//	{
//		int nexta = a + A[i];
//		int nextb = b + B[i]; //�����¿� ��� �̵������ϹǷ�.
//
//		if (arr[nexta][nextb]<arr[a][b])
//			if (arr[nexta][nextb] != 0)
//			{
//				dp[nexta][nextb] += 1;
//				fun(nexta, nextb);
//			}
//	}
//	return;
//}
//
//int main()
//{
//	scanf("%d %d", &M, &N);
//	for (int i = 1; i <= M; i++)
//	{
//		for (int j = 1; j <= N; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	fun(1,1);
//	printf("%d", dp[M][N]);
//}