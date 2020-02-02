//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int imove[8] = { 1,1,2,2,-1,-1,-2,-2 };
//int jmove[8] = { 2,-2,1,-1,2,-2,1,-1 };
//int matrix[8][8];
//int onest_cnt[8];
//int stack_point = 0;
//typedef struct pointt {
//	int x;
//	int y;
//}pointt;
//pointt stack[64];
//
//void push(int x, int y)
//{
//	stack[stack_point].x = x;
//	stack[stack_point++].y = y;
//}
//int pop()
//{
//	stack[stack_point].x = 0;
//	stack[stack_point].y = 0;
//	stack_point--;
//}
//int main(int argc, char* argv[])
//{
//	int m, n;
//	int point = 1;
//	int x, y;
//	int cnt = 0;
//	int min = 999, max = -999, avg = 0;
//	int sum = 0, al_sum = 0;
//	int last_pointx, last_pointy;
//	FILE* fp = fopen(argv[3], "w");
//
//
//	srand(time(NULL));
//	//if (argc != 4)exit(1);
//	//m = atoi(argv[1]), n = atoi(argv[2]);
//	//scanf("%d %d", &m,&n);
//
//	m = 4, n = 4;
//	if (m <= 0 || n <= 0 || m > 7 || n > 7)exit(1);
//
//
//	/*for (int i = 0; i < m; i++) {
//	for (int j = 0; j < n; j++)
//	printf("%d ", matrix[i][j]);
//	printf("\n");
//	}*/
//	int s = 0;
//	x = m;
//	y = n;
//	matrix[x][y] = point;
//	while (1)
//	{
//		int save_point_x = 0;
//		int save_point_y = 0;
//		for (int i = 0; i < 8; i++)
//		{
//			if (x + imove[i] < 0 || x + imove[i]>7 || y + jmove[i] < 0 || y + jmove[i]>7 || matrix[x + imove[i]][y + jmove[i]] != 0)//다음의 위치가 갈수 있는 위치인지 확인
//				continue;
//			for (int j = 0; j < 8; j++)//다음의 위치를 확인해 갈수 있는 장소가 가장 적은곳을 찾기 위해
//			{
//				if (x + imove[i] + imove[j] < 0 || x + imove[i] + imove[j]>7 || y + jmove[i] + jmove[j] < 0 || y + jmove[i] + jmove[j]>7 || matrix[x + imove[i] + imove[j]][y + jmove[i] + jmove[j]] != 0)
//					//다다음의 위치가 갈수 있는 장소인지 확인
//					continue;
//				else
//					onest_cnt[i] += 1;//다음 point에서 그다음 포인트로 갈수 있는 장소 갯수.
//			}
//			if (onest_cnt[i] == 0) {
//				if (point == 63) {
//					save_point_x = x + imove[i];
//					save_point_y = y + jmove[i];
//				}
//				else
//				{
//					onest_cnt[i] = 8;
//				}
//			}
//			if (onest_cnt[i] != 0 && min > onest_cnt[i]) {//다음에서 그다음 위치를 갈수 있는 path가 가장 적은곳
//				save_point_x = x + imove[i];
//				save_point_y = y + jmove[i];
//			}
//
//			memset(onest_cnt, 0, sizeof(onest_cnt));
//		}
//
//		x = save_point_x;
//		y = save_point_y;
//		push(x, y);
//		point++;
//		matrix[x][y] += point;
//
//		for (int i = 0; i < 8; i++) {
//			for (int j = 0; j < 8; j++)
//				printf("%d ", matrix[i][j]);
//			printf("\n");
//		}
//		printf("------------------------------------\n");
//		if (point == 64)break;
//	}
//
//	/*for (int i = 0; i < m; i++) {
//	for (int j = 0; j < n; j++)
//	printf("%d ", matrix[i][j]);
//	printf("\n");
//	}
//	printf("------------------------------------\n");*/
//	//fprintf(fp, "%d, (%d, %d)\n", min, last_pointx, last_pointy);
//	//fclose(fp);
//
//}