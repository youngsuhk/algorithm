//#include <stdio.h>
//#include <string.h> 
//#include <math.h>
//
//int N;
//int number[10]; //0~9 �� �ִ��� Ȯ��
////int cache[10][101]; //�����ϴ� ��, �ڸ��� ����
//int stairNum(int start, int length, int number[])
//{
//	//���� ��� : ���� ����
// 	if (start < 0 || start>9)
//		return 0;
//	//���� ��� : ����
//	if (length > N)
//		return 0;
//	number[start] = 1; //�ش� digit ǥ��
//	//int result = cache[start][length];
//	int result = -1;
//	//if (result != -1)
//		//return result;
//	int allDigit = 1;
//	//0~9 ���� �־�� ����
//	for (int i = 0; i < 10; i++)
//		if (number[i] == 0)
//		{
//			allDigit = 0;
//			break;
//		}
//	//��� �� : �ϳ��� ����
//	result = allDigit + (stairNum(start - 1, length + 1, number) + stairNum(start + 1, length + 1, number)) % 1000000000;
//	number[start] = 0; //�ش� digit �ٽ� �������ɷ�
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
//		result += stairNum(start, 1, number); //0���� ������ �� ����
//		result %= 1000000000;
//	}
//	printf("%d", result);
//	return 0;
//}