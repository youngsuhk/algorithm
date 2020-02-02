//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int **matrix;
//int main(/*int argc,char* argv[]*/)
//{
//	int m,n;
//	int point = 1;
//	int simul = 50000;
//	int random;
//	int x, y;
//	int cnt=0;
//	int imove[8],jmove[8];
//	int min=999, max=-999, avg=0;
//	int sum = 0,al_sum=0;
//	int last_pointx, last_pointy;
//	//FILE* fp = fopen(argv[3], "w");
//	imove[0] = -1, jmove[0] = 1;
//	imove[1] = 0, jmove[1] = 1;
//	imove[2] = 1, jmove[2] = 1;
//	imove[3] = 1, jmove[3] = 0;
//	imove[4] = 1, jmove[4] = -1;
//	imove[5] = 0, jmove[5] = -1;
//	imove[6] = -1, jmove[6] = -1;
//	imove[7] = -1, jmove[7] = 0;
//
//	srand(time(NULL));
//	//if (argc != 4)exit(1);
//	//m = atoi(argv[1]), n = atoi(argv[2]);
//	scanf("%d %d", &m,&n);
//
//
//	if (m <= 0 || n <= 0)exit(1);
//	matrix = (int(*)[])malloc(sizeof(int*)*m);
//	for (int i = 0; i < m; i++)
//		matrix[i] = (int*)malloc(sizeof(int*)*n);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			matrix[i][j] = 0;
//		}
//	}
//	/*for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++)
//			printf("%d ", matrix[i][j]);
//		printf("\n");
//	}*/
//	int s = 0;
//	x = m / 2;
//	y = n / 2;
//	while (simul > s)
//	{
//		
//		matrix[x][y] = point;
//		while (1)
//		{
//			random = rand() % 8;
//			if (x + imove[random] < 0 || x + imove[random] == m || y + jmove[random] < 0 || y + jmove[random] == n)
//				continue;
//			matrix[x=x + imove[random]][y=y + jmove[random]] += point;
//			/*for (int i = 0; i < m; i++) {
//				for (int j = 0; j < n; j++)
//					printf("%d ", matrix[i][j]);
//				printf("\n");
//			}
//			printf("------------------------------------\n");*/
//			if (matrix[x][y] == 1)cnt++;
//			if (cnt == (m * n)-1)
//			{
//				for (int i = 0; i < m; i++) {
//					for (int j = 0; j < n; j++)
//						sum+=matrix[i][j];
//				}
//				break;
//			}
//		}
//		if (min > sum)min = sum,last_pointx=x,last_pointy=y;
//		if (max < sum)max = sum;
//		al_sum += sum;
//		sum = 0;
//		cnt = 0;
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				matrix[i][j] = 0;
//			}
//		}
//		s++;
//		x = rand() % m;
//		y = rand() % n;
//	}
//	printf( "%d, (%d, %d)\n", min, last_pointx, last_pointy);
//	/*fprintf(fp,"%d, (%d, %d)\n", min, last_pointx, last_pointy);
//	fclose(fp);
//*/
//}