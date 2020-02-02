//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <time.h>
//int col[1001];
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
//int queen(int i, int n) {
//	int k = 0;
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
//	return k;
//}
//
//int main(void) {
//	int i;
//	int n;
//	int k;
//	char file[50];
//	srand(time(NULL));
//
//	printf("input file name? ");
//	scanf("%s", file);
//
//	freopen(file, "r", stdin);
//	freopen("output.txt", "w", stdout);
//
//	scanf("%d", &n);
//	while (1) {
//		for (i = 1; i <= n - 20; i++) {
//			col[i] = rand() % n + 1;
//			if (promising(i) == 0)
//				i--;
//		}
//		k = queen(n - 20, n);
//		if (k == n + 1 && count != 1)
//			continue;
//		else break;
//	}
//	for (i = 1; i <= n; i++) {
//		printf("%d", col[i]);
//		if (i != n)
//			printf("\n");
//	}
//	return 0;
//}