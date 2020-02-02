///*
//오르막 수는 수의 자리가 오름차순을 이루는 수를 말한다. 이때, 인접한 수가 같아도 오름차순으로 친다.
//예를 들어, 2234와 3678, 11119는 오르막 수이지만, 2232, 3676, 91111은 오르막 수가 아니다.
//수의 길이 N이 주어졌을 때, 오르막 수의 개수를 구하는 프로그램을 작성하시오. 수는 0으로 시작할 수 있다.
//*/
///*
//배열 형태
//n	0  1  2  3  4  5  6  7  8  9
//1	1  1  1  1  1  1  1  1  1  1 
//2	1  2  3  4  5  6  7  8  9  10
//3   1  3  6  10 15 21 28 36 45 55
//.
//.
//.
//*/
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n,sum=0;
//	int dp[1001][11] = { 1, };
//	cin >> n;
//
//	for (int i = 0; i < 10; i++)
//	{
//		dp[0][i] = 1;
//	}
//	
//	for (int i = 0;i<n;i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			for (int k = 0; k <= j; k++)
//			{
//				dp[i + 1][j] += dp[i][k];
//				dp[i + 1][j] = dp[i + 1][j] % 10007;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++) {
//		sum += dp[n - 1][i];
//		sum = sum % 10007;
//	}
//	cout << sum;
//}