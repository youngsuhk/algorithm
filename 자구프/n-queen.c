//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int col[31];
//
//int promising(int i) {
//	int result = 1;
//	int k;
//
//	for (k = 1; k < i; k++) {
//		if (!result)
//			break;
//		if (col[k] == col[i] || abs(col[k] - col[i]) == abs(k - i))
//			result = 0;
//	}
//	return result;
//}
//int count = 0;
//
//void queen(int i, int n) {
//	int k;
//
//	if (promising(i)) {
//		if (i == n) count++;
//		else {
//			for (k = 1; k <= n; k++) {
//				col[i + 1] = k;
//				queen(i + 1, n);
//				if (count != 0)break;
//			}
//		}
//	}
//
//
//}
//
//int main(void) {
//	int i;
//	int n;
//	char file[50];
//
//	printf("input file name? ");
//	//scanf("%s", file);
//
//	//freopen(file, "r", stdin);
//	//freopen("output.txt", "w", stdout);
//
//	scanf("%d", &n);
//	queen(0, n);
//	for (i = 1; i <= n; i++) {
//		printf("%d", col[i]);
//		if (i != n)
//			printf("\n");
//	}
//	return 0;
//}