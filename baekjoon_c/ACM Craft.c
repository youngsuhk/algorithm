//#include <stdio.h>
//int N/*Building����*/, K/*rule of Building�� ���� */, D[1001]/*�� building�� �Ǽ��Ǵµ� �ʿ��� �ð�*/;
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
//	//���
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
//	int T/*Testcase ����*/;
//	scanf("%d", &T);
//
//	for (int t = 0; t < T; t++)
//	{
//		printf("%d",ACM_Craft());
//	}
//	
//}