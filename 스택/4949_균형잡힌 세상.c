//#include <stdio.h>
//#include <string.h>
//int T;
//char stack[101];
//char input_ch[101];
//int cnt1,cnt2;
//char ch;
//int size;
//
//int main()
//{
//	//int i = 0;
//	while(1)
//	{
//		gets(input_ch);
//		/*while (1)
//		{
//			scanf("%c", &input_ch[i]);
//			if (input_ch[i] == '.')break;
//			i++;
//		}*/
//		//i = 0;
//		if (input_ch[1]==0 && input_ch[0] == '.')
//			break;
//		for (int j = 0; input_ch[j]!=0; j++)
//		{
//			if (input_ch[j] == '(') stack[++size]= input_ch[j];
//			if (input_ch[j] == ')') {
//				if (stack[size--] != '(')
//				{
//					cnt1++;
//					break;
//				}
//			}
//			if (input_ch[j] == '[') stack[++size] = input_ch[j];
//			if (input_ch[j] == ']') {
//				if (stack[size--]!='[')
//				{
//					cnt1++;
//					break;
//				}
//			}
//		}
//		if (cnt1==0)printf("yes\n");
//		else printf("no\n");
//		memset(stack, 0, sizeof(stack));
//		memset(input_ch, 0, sizeof(input_ch));
//		cnt1 = 0;
//	}
//}