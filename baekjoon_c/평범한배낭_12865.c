////��ȭ��:
////D(i,k) =  { D(i-1,k) (W[i] > k) -- W[i]�� ������ �Ѱ� K ���� ���ſ�� D(i,k)= D(i-1,k)
////			{ max(D(i - 1, k), D(i, k - W[i]) + V[i]) (W[i] �� k) 
////				: W[i]�� ������ �Ѱ� K ���� ������� D(i,k) = D(i-1,k)�� D(i, k - W[i]) + V[i]�� ū��.
//#include <stdio.h>
//int w[101];
//int v[101];
//int dp[101][100001];
//int n, k;
//int max(int a, int b)
//{
//	if (a < b)return b;
//	else return a;
//}
//int main() {
//	scanf("%d %d", &n, &k);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d %d", &w[i], &v[i]);
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= k; j++) {
//			if (j - w[i] < 0) 
//				dp[i][j] = dp[i-1][j];
//			else 
//				dp[i][j] = max(dp[i - 1][j], dp[i-1][j - w[i]] + v[i]);
//		}
//	}
//	printf("%d\n", dp[n][k]);
//}
