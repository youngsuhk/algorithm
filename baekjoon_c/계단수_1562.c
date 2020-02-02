//#include <stdio.h>
//#include <string.h> 
//#include <math.h>
//
//int N;
//int number[10]; //0~9 다 있는지 확인
////int cache[10][101]; //시작하는 수, 자리수 길이
//int stairNum(int start, int length, int number[])
//{
//	//기저 사례 : 숫자 범위
// 	if (start < 0 || start>9)
//		return 0;
//	//기저 사례 : 길이
//	if (length > N)
//		return 0;
//	number[start] = 1; //해당 digit 표시
//	//int result = cache[start][length];
//	int result = -1;
//	//if (result != -1)
//		//return result;
//	int allDigit = 1;
//	//0~9 전부 있어야 센다
//	for (int i = 0; i < 10; i++)
//		if (number[i] == 0)
//		{
//			allDigit = 0;
//			break;
//		}
//	//계단 수 : 하나씩 차이
//	result = allDigit + (stairNum(start - 1, length + 1, number) + stairNum(start + 1, length + 1, number)) % 1000000000;
//	number[start] = 0; //해당 digit 다시 없었던걸로
//	return result;
//}
//int main(void)
//{
//	scanf("%d", &N);
//	int result = 0;
//	for (int start = 1; start <= 9; start++)
//	{
//		//memset(cache, -1, sizeof(cache));
//		memset(number, 0, sizeof(number));
//		result += stairNum(start, 1, number); //0으로 시작할 수 없음
//		result %= 1000000000;
//	}
//	printf("%d", result);
//	return 0;
//}