//#include <stdio.h>
//
//int N;
//int arr1[1000001];
//int arr2[1000001];//stack[i][1]번째에 들어온 숫자에 오큰수를 넣어준다.
//int stack[1000001][2];//[i][0]: 스택에 쌓이는 숫자, [i][1]: 그 숫자가 며번째에 들어왔는지
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
//		if (arr1[i] == 0)//마지막 숫자 입력시
//		{
//			while (size>0)//스택에 쌓인 모든 수는 오큰수가 존재하지 않기떄문에
//			{
//				arr2[stack[size][1]] = -1;//-1 입력
//				pop();
//			}
//		}
//		if (stack[size][0] > arr1[i])//이전의 수보다 작으면 스택에 쌓기.
//			push(arr1[i],i);
//		else//이전의 수보다 큰수가 나오면 오큰수 !
//		{
//			while (stack[size][0] < arr1[i])//오큰수가 아닐때까지 출력
//			{
//				arr2[stack[size][1]] = arr1[i];
//				pop();
//			}
//			push(arr1[i],i);//작은 숫자 다 출력시 현재 숫자 스택에 넣기.
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}