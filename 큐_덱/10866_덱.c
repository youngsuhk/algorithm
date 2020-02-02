//#include <stdio.h>
//#include <string.h>
//int n;
//int input_num;
//char input_char[10];
//int ck;
//int q[30001];
//int back=15000;
//int front=15000;
//void push_front(int input_num)
//{
//	q[--front] = input_num;
//}
//void push_back(int input_num)
//{
//	q[back++] = input_num;
//}
//int pop_front()
//{
//	if (back == front)return -1;
//	int temp=q[front];
//	q[front++] = 0;
//	return temp;
//}
//int pop_back()
//{
//	if (back == front)return -1;
//	int temp = q[--back];
//	q[back] = 0;
//	return temp;
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
//		if (strcmp(input_char, "push_front") == 0)
//		{
//			ck = 1;
//			scanf("%d", &input_num);
//		}
//		if (strcmp(input_char, "push_back") == 0)
//		{
//			ck = 2;
//			scanf("%d", &input_num);
//		}
//		else if (strcmp(input_char, "pop_front") == 0)
//		{
//			ck = 3;			
//		}
//		else if (strcmp(input_char, "pop_back") == 0)
//		{
//			ck = 4;
//		}
//		else if (strcmp(input_char, "size") == 0)
//		{
//			ck = 5;			
//		}
//		else if (strcmp(input_char, "empty") == 0)
//		{
//			ck = 6;
//		}
//		else if (strcmp(input_char, "front") == 0)
//		{
//			ck = 7;
//		}
//		else if (strcmp(input_char, "back") == 0)
//		{
//			ck = 8;
//		}
//		
//		switch (ck)
//		{
//		case 1:
//			push_front(input_num);
//			break;
//		case 2:
//			push_back(input_num);
//			break;
//		case 3:printf("%d\n",pop_front());
//			break;
//		case 4:printf("%d\n", pop_back());
//			break;
//		case 5:printf("%d\n", back-front);
//			break;
//		case 6:printf("%d\n",empty());
//			break;
//		case 7:
//			if (front == back)printf("%d\n", -1);
//			else printf("%d\n",q[front]);
//			break;
//		case 8:
//			if (front == back)printf("%d\n", -1); 
//			else printf("%d\n", q[back-1]);
//			break;
//		}
//	}
//}