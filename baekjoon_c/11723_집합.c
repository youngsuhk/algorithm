//#include <stdio.h>
//#include <string.h>
//int N;
//int input_num;
//char input_char[10];
//int ck;
//int dp[21];
//int main()
//{
//	scanf("%d", &N);
//
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%s", input_char);
//		if (strcmp(input_char, "add") == 0)
//		{
//			ck = 1;
//			scanf("%d", &input_num);
//		}
//		else if (strcmp(input_char, "remove") == 0)
//		{
//			ck = 2;
//			scanf("%d", &input_num);
//		}
//		else if (strcmp(input_char, "check") == 0)
//		{
//			ck = 3;
//			scanf("%d", &input_num);
//		}
//		else if (strcmp(input_char, "toggle") == 0)
//		{
//			ck = 4;
//			scanf("%d", &input_num);
//		}
//		else if (strcmp(input_char, "all") == 0)
//		{
//			ck = 5;
//		}
//		else if (strcmp(input_char, "empty") == 0)
//		{
//			ck = 6;
//		}
//		
//		switch (ck)
//		{
//		case 1:
//			dp[input_num] = 1;
//			break;
//		case 2:
//			dp[input_num] = 0;
//			break;
//		case 3:
//			printf("%d\n", dp[input_num]);
//			break;
//		case 4:
//			if(dp[input_num]==1) dp[input_num]=0;
//			else dp[input_num] = 1;
//			break;
//		case 5:
//			for (int i = 1; i <= 20; i++)
//				dp[i] = 1;
//			break;
//		case 6:
//			for (int i = 1; i <= 20; i++)
//				dp[i] = 0;
//			break;
//		}
//	}
//}