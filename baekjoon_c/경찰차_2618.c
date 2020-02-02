//#include <stdio.h>
//#include <string.h> 
//#include <math.h>
//
//int n, w;
//typedef struct col {
//	int x, y;
//}col;
//col fir[1001], sec[1001];
//int dp[1001][1001];
//int min(int a, int b)
//{
//	if (a < b)return a;
//	else return b;
//}
//int max(int a, int b)
//{
//	if (a < b)return b;
//	else return a;
//}
//int func(int c1, int c2) {
//	if (c1 == w || c2 == w)
//		return 0;
//	int ref = dp[c1][c2];
//
//	int np = max(c1, c2) + 1;
//	//int n1 = abs(fir[c1].x - fir[np].x) + abs(fir[c1].y - fir[np].y);
//	dp[np][c2]= abs(fir[c1].x - fir[np].x) + abs(fir[c1].y - fir[np].y);
//	//int n2 = func(np, c2) + n1;
//	//int n2 = func(np, c2) + dp[np][c2];
//	dp[np][c2]= func(np, c2) + dp[np][c2];
//
//	//int m1 = abs(sec[c2].x - sec[np].x) + abs(sec[c2].y - sec[np].y);
//	dp[c1][np]= abs(sec[c2].x - sec[np].x) + abs(sec[c2].y - sec[np].y);
//	//int m2 = func(c1, np) + m1;
//	//int m2 = func(c1, np) + dp[c1][np];
//	dp[c1][np]= func(c1, np) + dp[c1][np];
//	//dp[c1][np],dp[np][c2] = min(dp[c1][np], dp[np][c2]);
//}
//
//int main() {
//	scanf("%d %d", &n, &w);
//
//	fir[0].x =  1;
//	fir[0].y = 1;
//	sec[0].x =  n;
//	sec[0].y = n;
//	for (int i = 1; i <= w; ++i) {
//		scanf("%d %d", &fir[i].x, &fir[i].y);
//		sec[i].x = fir[i].x;
//		sec[i].y = fir[i].y ;
//	}
//
//	memset(dp, -1, sizeof(dp));
//	printf("%d\n", func(0, 0));
//
//	return 0;
//}
