//#include <stdio.h>
//#include <string.h>
//int T,n,m,cnt=1,cnt1;
//int front, back;
////int q[1000000];
//typedef struct Q{
//	int num;
//	int point;
//	int importance;
//}Q;
//Q q[10000];
//
//int push(int num,int impor)
//{
//	q[back].num = num;
//	q[back++].importance= impor;
//}
//Q pop()
//{
//	return q[front++];
//}
//int main()
//{
//	int num;
//	scanf("%d", &T);
//	for (int i = 0; i < T; i++)
//	{
//		//n : n���� ����
//		//m : m�� �ڸ��� �ִ¼��� ���°�� ��� ?
//		scanf("%d %d", &n, &m);
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &num);//�߿䵵
//			if (j == m)
//				q[back].point = 1;
//			push(j,num);
//			
//		}
//		while (q[back].point!=1)//������ ���� q�� ã�ƾ� �ϴ� �����϶� ����
//		{
//			int temp = front;
//			Q temp_q;
//			cnt1 = 0;
//			while (temp != back)//front ���� back ���� ū ���� �ִ��� Ȯ���ϱ����� 
//			{
//				if (q[front].importance < q[temp].importance)//���� ū���� �ִٸ� 
//				{
//					temp_q = pop();
//					if (temp_q.point == 1)q[back].point = 1;
//					push(temp_q.num, temp_q.importance);
//					cnt1++;
//					break;
//				}
//				temp++;
//			}
//			if(cnt1!=0)//ū���� �޺κп� �־��� ���.
//			{
//				continue;
//			}
//			else//ū���� �ڿ� ������ ���.
//			{
//				
//				temp_q = pop();//ū �� ���ֱ�
//				if (temp_q.point == 1)//���� �� ū���� ���� ���ؾ� �ϴ� �����̸�
//				{
//					printf("%d\n", cnt);//�̹��� ����ϴ� ���ڰ� ���°���� ���
//					break;
//				}
//				else//�� ū���� ���� ���ؾ� �ϴ� ���ڰ� �ƴϸ�
//				{
//					cnt++;//����� Ƚ�� ���� 
//					continue;
//				}
//			}
//		
//			
//		}
//		cnt = 1;
//		front = 0;
//		back = 0;
//		memset(q, 0, sizeof(q));
//	}
//}