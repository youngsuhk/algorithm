//#include <stdio.h>
//int arr[501][501];
//int dp[501][501];
//int M, N;
//int a[4] = { 1, 0, -1, 0 };
//int b[4] = { 0, 1, 0, -1 };
//int dfs(int x, int y)
//{
//	if (dp[x][y] != -1) return dp[x][y]; //���� �̹� �ִ°�� �ǰ���������� �ִ°� ����
//	if (x <= 0 || x > M || y <= 0 || y > N) return 0; //���� ��� ���� �Ұ����ϹǷ� 0����
//	if (x == 1 && y == 1) return 1; //�������
//
//	dp[x][y] = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		int nextX = x + a[i];
//		int nextY = y + b[i]; //�����¿� ��� �̵������ϹǷ�.
//
//		if (arr[nextX][nextY]>arr[x][y])
//			dp[x][y] += dfs(nextX, nextY);
//	}
//	return dp[x][y];
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
//	memset(dp, -1, sizeof(dp));
//	
//	printf("%d", dfs(M, N));
//
//}