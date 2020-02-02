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
//		//n : n개의 문서
//		//m : m번 자리에 있는수가 몇번째에 출력 ?
//		scanf("%d %d", &n, &m);
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &num);//중요도
//			if (j == m)
//				q[back].point = 1;
//			push(j,num);
//			
//		}
//		while (q[back].point!=1)//마지막 남는 q가 찾아야 하는 문서일때 까지
//		{
//			int temp = front;
//			Q temp_q;
//			cnt1 = 0;
//			while (temp != back)//front 에서 back 까지 큰 수가 있는지 확인하기위해 
//			{
//				if (q[front].importance < q[temp].importance)//만약 큰수가 있다면 
//				{
//					temp_q = pop();
//					if (temp_q.point == 1)q[back].point = 1;
//					push(temp_q.num, temp_q.importance);
//					cnt1++;
//					break;
//				}
//				temp++;
//			}
//			if(cnt1!=0)//큰수가 뒷부분에 있었을 경우.
//			{
//				continue;
//			}
//			else//큰수가 뒤에 없었을 경우.
//			{
//				
//				temp_q = pop();//큰 수 없애기
//				if (temp_q.point == 1)//만약 그 큰수가 내가 구해야 하는 숫자이면
//				{
//					printf("%d\n", cnt);//이번에 출력하는 숫자가 몇번째인지 출력
//					break;
//				}
//				else//그 큰수가 내가 구해야 하는 숫자가 아니면
//				{
//					cnt++;//출력한 횟수 저장 
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