//#include<stdio.h>
//long int dp[10] = { 1,1, 1,1,1,1,1,1,1,1 };
//long int temp[10] = { 1,1, 1,1,1,1,1,1,1,1 };
//int recur(int N)
//{
//	if (N == 1)
//		return;
//	temp[9] = dp[8];
//	temp[8] = dp[7] + dp[9];
//	temp[7] = dp[6] + dp[8];
//	temp[6] = dp[5] + dp[7];
//	temp[5] = dp[4] + dp[6];
//	temp[9] = temp[9] % 1000000000;
//	temp[8] = temp[8] % 1000000000;
//	temp[7] = temp[7] % 1000000000;
//	temp[6] = temp[6] % 1000000000;
//	temp[5] = temp[5] % 1000000000;
//
//	dp[9]=temp[9];
//	dp[1] = temp[8], dp[8] = temp[8];
//	dp[2] = temp[7], dp[7] = temp[7];
//	dp[3] = temp[6], dp[6] = temp[6];
//	dp[4] = temp[5], dp[5] = temp[5];
//	return recur(N - 1);
//}
//int main()
//{
//	int N;
//	int sum=0;
//	scanf("%d", &N);
//	recur(N);
//	for (int i = 1; i <= 9; i++)
//	{
//		sum += dp[i];
//		sum = sum % 1000000000;
//	}
//	printf("%d",sum% 1000000000);
//}