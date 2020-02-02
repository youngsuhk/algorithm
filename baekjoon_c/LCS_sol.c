//#include <stdio.h>
//char s1[1002], s2[1002];
//int dp[1001][1001], i, j;
//int Max(int a, int b)
//{
//	if (a < b)return b;
//	else return a;
//}
//int main()
//{
//	int max = 0;
//	scanf("%s", s1 + 1);
//	scanf("%s", s2 + 1);
//
//	for (i = 1; s1[i]; i++)
//		for (j = 1; s2[j]; j++)
//			dp[i][j] = Max(Max(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1] + (s1[i] == s2[j]));
//	printf("%d", dp[i - 1][j - 1]);
//	return 0;
//
//}