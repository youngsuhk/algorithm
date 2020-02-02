//#include <stdio.h>
//int N/*Building갯수*/, K/*rule of Building의 갯수 */, D[1001]/*각 building이 건설되는데 필요한 시간*/;
//int X, Y, W;
//int dp[1001][1001];
//int cnt[1001];
//int result;
//int save[1001];
//int cnt_s ;
//int ACM_Craft()
//{
//	
//	scanf("%d %d", &N, &K);
//	for (int n = 1; n <= N; n++)
//	{
//		scanf("%d", &D[n]);
//	}
//	for (int k=0; k < K; k++)
//	{
//		scanf("%d %d", &X, &Y);
//		dp[cnt[Y]][Y] = X;
//		cnt[Y] = cnt[Y] + 1;
//	}
//	scanf("%d", &W);
//	////////////////////////////////////////////
//	//계산
//	
//	for (int i=1;i<=N;i++)
//	{
//		if (cnt[i] >= 2)
//		{
//			save[cnt_s++] = i;
//		}
//	}
//	for (int i = 0; save[i] != 0; i++)
//	{
//		for (int j = save[i]; j < save[i]; j++)
//		{
//
//		}
//	}
//	return result;
//}
//
//int main()
//{
//	int T/*Testcase 갯수*/;
//	scanf("%d", &T);
//
//	for (int t = 0; t < T; t++)
//	{
//		printf("%d",ACM_Craft());
//	}
//	
//}