//#include <stdio.h>
//
//int N;
//int arr1[1000001];
//int arr2[1000001];//stack[i][1]��°�� ���� ���ڿ� ��ū���� �־��ش�.
//int stack[1000001][2];//[i][0]: ���ÿ� ���̴� ����, [i][1]: �� ���ڰ� ���°�� ���Դ���
//int size;
////8
////8 3 2 5 4 9 2 1
////answer: 9 5 5 9 9 - 1 - 1 - 1
////output : -1 5 5 9 9 - 1 - 1 - 1
//int push(int num, int cnt)
//{
//	stack[++size][0]=num;
//	stack[size][1] = cnt;
//}
//int pop()
//{
//	stack[size][1] = 0;
//	return stack[size--][0];
//}
//int main()
//{
//	stack[0][0] = 2147438647;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	
//	for (int i = 0; i <= N; i++)
//	{
//		if (arr1[i] == 0)//������ ���� �Է½�
//		{
//			while (size>0)//���ÿ� ���� ��� ���� ��ū���� �������� �ʱ⋚����
//			{
//				arr2[stack[size][1]] = -1;//-1 �Է�
//				pop();
//			}
//		}
//		if (stack[size][0] > arr1[i])//������ ������ ������ ���ÿ� �ױ�.
//			push(arr1[i],i);
//		else//������ ������ ū���� ������ ��ū�� !
//		{
//			while (stack[size][0] < arr1[i])//��ū���� �ƴҶ����� ���
//			{
//				arr2[stack[size][1]] = arr1[i];
//				pop();
//			}
//			push(arr1[i],i);//���� ���� �� ��½� ���� ���� ���ÿ� �ֱ�.
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}