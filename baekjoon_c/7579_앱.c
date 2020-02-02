//#include <stdio.h> 
//
//#define INF 987654321
//
//int N, M;
//int reservedMemory[101];
//int deactivatingCost[101];
//int dp[101][100001];
//int max(int a, int b)
//{
//	if (a < b)return b;
//	else return a;
//}
//int main() 
//{
//	scanf("%d %d", &N, &M);
//	
//	for (int i = 1; i <= N; i++) {
//		scanf("%d", &reservedMemory[i]);
//	}
//	for (int i = 1; i <= N; i++) {
//		scanf("%d",&deactivatingCost[i]);
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 0; j <= N*100; j++) {
//			if (j >= deactivatingCost[i]) {
//				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - deactivatingCost[i]] + reservedMemory[i]);
//			}
//			else {
//				dp[i][j] = dp[i - 1][j];
//			}
//		}
//	}
//	int ans = 987654321;
//	for (int i = 0; i <= N * 100; i++) {
//		if (dp[N][i] >= M)
//		{
//			ans = i;
//			break;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}