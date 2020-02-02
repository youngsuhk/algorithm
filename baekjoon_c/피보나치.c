//#include<stdio.h>
//int dp[100];
//int fibonacci(int input_d)
//{
//	if (input_d <= 0)
//	{
//		//dp[0] = 0;
//		return 0;
//	}
//	else if (input_d == 1)
//	{
//		//dp[1] = 1;
//		return 1;
//	}
//	else
//	{
//		if (dp[input_d] != 0)
//		{
//			return dp[input_d];
//		}
//		else
//		{
//			return dp[input_d] = fibonacci(input_d - 1) + fibonacci(input_d - 2);
//		}
//	}
//	
//}
//int main()
//{
//	int input_num=0;
//	int input_d;
//	scanf("%d", &input_num);
//	for (int i = 0; i < input_num; i++)
//	{
//		scanf("%d", &input_d);
//		if (input_d == 0)
//		{
//			printf("%d %d\n", 1, 0);
//		}
//		else if (input_d == 1) {
//			printf("%d %d\n", 0, 1);
//		}
//		else {
//			fibonacci(input_d);
//			printf("%d %d\n", dp[input_d - 1], dp[input_d]);
//		}
//	}
//	return 0;
//}
