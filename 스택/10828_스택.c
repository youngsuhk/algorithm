//#include <stdio.h>
//#include <string.h>
//int N;
//int input_num;
//char input_char[10];
//int ck;
//int stack[10001];
//int size=0;
//void push(int input_num)
//{
//	stack[++size] = input_num;
//}
//int pop()
//{
//	if (size == 0)return -1;
//	return stack[size--];
//}
//int top()
//{
//	if (size == 0)return -1;
//	return stack[size];
//}
//int empty()
//{
//	if (size == 0)return 1;
//	else return 0;
//}
//int main()
//{
//	scanf("%d", &N);
//
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%s", input_char);
//		if (strcmp(input_char, "push") == 0)
//		{
//			ck = 1;
//			scanf("%d", &input_num);
//		}
//		else if (strcmp(input_char, "pop") == 0)
//		{
//			ck = 2;			
//		}
//		else if (strcmp(input_char, "size") == 0)
//		{
//			ck = 3;			
//		}
//		else if (strcmp(input_char, "empty") == 0)
//		{
//			ck = 4;
//		}
//		else if (strcmp(input_char, "top") == 0)
//		{
//			ck = 5;
//		}
//		
//		switch (ck)
//		{
//		case 1:
//			push(input_num);
//			break;
//		case 2:printf("%d\n",pop());
//			break;
//		case 3:printf("%d\n", size);
//			break;
//		case 4:printf("%d\n",empty());
//			break;
//		case 5:printf("%d\n",top());
//			break;
//		}
//	}
//}