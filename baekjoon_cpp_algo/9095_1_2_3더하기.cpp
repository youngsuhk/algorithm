//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	int dp[100000];
//	int a[11];
//	int max=0;
//	cin >> N;
//	
//	dp[1] = 1;
//	dp[2] = 2;
//	dp[3] = 4;	
//	for (int i = 0; i < N; i++)
//	{
//		cin >> a[i];
//		if (max < a[i])max = a[i];
//	}
//	for (int j = 4; j <= max ; j++)
//	{
//		dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
//	}
//	for (int i = 0; i < N; i++)
//	{
//		cout << dp[a[i]];
//		cout << "\n";
//	}
//}