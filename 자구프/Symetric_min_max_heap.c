////15 50 25 76 38 19 58 29 88 44 22 11 34 17 52 26
//#include <stdio.h>
//#include <stdlib.h>
//#define FALSE 1
//#define TRUE 0
//void insert(int);
//int last = 0;
//int h[100];
//int arrayLength;
//int main()
//{
//	int n,input;
//	scanf("%d",&n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &input);
//		insert(input);
//	}
//}
//
//void insert(int x) {
//	int currentNode, done, gp, lcgp, rcgp;
//	if (last == arrayLength-1) {
//		arrayLength *=2;
//	}
//	currentNode = ++last;
//	if (last % 2 == 1 && x < h[last-1]) {
//		h[last] = h[last-1];
//		currentNode--;
//	}
//	done = FALSE;
//	while (!done && currentNode >= 4) {
//		gp = currentNode / 4;
//		lcgp = 2 * gp;
//		rcgp = lcgp + 1;
//		if (x < h[lcgp]) {
//			h[currentNode] = h[lcgp]; 
//			currentNode = lcgp;
//		}
//		else if (x > h[rcgp]) {
//			h[currentNode] = h[rcgp]; currentNode = rcgp;
//		}
//		else done = TRUE;
//	}
//	h[currentNode] = x;
//}