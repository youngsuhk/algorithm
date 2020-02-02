//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	int sum=0;
//	int dp[2][11] = { { 1,1,1,1,1,1,1,1,1,1,0 },{ 1,1,1,1,1,1,1,1,1,1,0 } };
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 1; j <= 9; j++)
//		{
//			dp[1][j] = (dp[0][j - 1] + dp[0][j + 1])% 1000000000;
//		}
//		for (int j = 1; j <= 9; j++)
//		{
//			dp[0][j] = dp[1][j];
//		}
//		for (int j = 1; j <= 4; j++)
//		{
//			dp[0][j] = dp[1][9-j];
//		}
//	}
//	for (int i = 1; i <= 9; i++)
//	{
//		sum += dp[0][i];
//		sum = sum % 1000000000;
//	}
//	cout << sum;
//}