//#include <stdio.h>
//#include <string.h>
//int n;
//int input_num;
//char input_char[10];
//int ck;
//int q[10001];
//int back;
//int front;
//void push(int input_num)
//{
//	q[back++] = input_num;
//}
//int pop()
//{
//	if (back == front)return -1;
//	return q[front++];
//}
//int empty()
//{
//	if (back == front)return 1;
//	else return 0;
//}
//
//int main()
//{
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
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
//		else if (strcmp(input_char, "front") == 0)
//		{
//			ck = 5;
//		}
//		else if (strcmp(input_char, "back") == 0)
//		{
//			ck = 6;
//		}
//		
//		switch (ck)
//		{
//		case 1:
//			push(input_num);
//			break;
//		case 2:printf("%d\n",pop());
//			break;
//		case 3:printf("%d\n", back-front);
//			break;
//		case 4:printf("%d\n",empty());
//			break;
//		case 5:
//			if (front == back)printf("%d\n", -1);
//			else printf("%d\n",q[front]);
//			break;
//		case 6:
//			if (front == back)printf("%d\n", -1); 
//			else printf("%d\n", q[back-1]);
//			break;
//		}
//	}
//}