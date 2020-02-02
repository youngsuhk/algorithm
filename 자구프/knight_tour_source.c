//#include<stdio.h>
//#include<string.h>
//#include <stdbool.h>
//#define N 8
//#define X 4
//#define Y 8
//
//
//
//
///* A utility function to check if i,j are valid indexes
//for N*N chessboard */
//bool isSafe(int x, int y, int sol[X][Y])
//{
//	return (x >= 0 && x < X && y >= 0 &&
//		y < Y && sol[x][y] == -1);
//}
//
///* A utility function to print solution matrix sol[N][N] */
//void printSolution(int sol[X][Y])
//{
//	for (int x = 0; x < X; x++)
//	{
//		for (int y = 0; y < Y; y++)
//			printf("%d ", sol[x][y]);
//		printf("\n");
//	}
//	printf("-------------------------------\n");
//}
//
//
//bool solveKT()
//{
//	int sol[X][Y];
//	int x, y;
//	/* Initialization of solution matrix */
//	int xMove[8] = { 2, 1, -1, -2, -2, -1,  1,  2 };
//	int yMove[8] = { 1, 2,  2,  1, -1, -2, -2, -1 };
//
//	// Since the Knight is initially at the first block 
//	//scanf("%d %d", &x, &y);
//	x = 0;
//	y = 0;
//	memset(sol, -1, sizeof(sol));
//	sol[x][y] = 0;
//
//	/* Start from 0,0 and explore all tours using
//	solveKTUtil() */
//	if (solveKTUtil(x, y, 1, sol, xMove, yMove) == false)
//	{
//		printf("Solution does not exist");
//		return false;
//	}
//	else
//		printSolution(sol);
//
//	return true;
//}
//
///* A recursive utility function to solve Knight Tour
//problem */
//int checkpoint(int x,int y, int sol[X][Y], int xMove[N], int yMove[N],int check_arr[N])
//{
//	int next_x, next_y;
//	int check_x, check_y;
//	int onest_cnt[8];
//	memset(onest_cnt, 0, sizeof(onest_cnt));
//
//	for (int i = 0; i < 8; i++) {
//		next_x = x + xMove[i];
//		next_y = y + yMove[i];
//		if (isSafe(next_x, next_x, sol)) {
//			for (int j = 0; j < 8; j++)//다음의 위치를 확인해 갈수 있는 장소가 가장 적은곳을 찾기 위해
//			{
//				check_x = next_x + xMove[j];
//				check_y = next_y + yMove[j];
//				if (isSafe(check_x, check_y, sol))
//					onest_cnt[i] += 1;//다음 point에서 그다음 포인트로 갈수 있는 장소 갯수.
//			}
//		}
//	}
//	int min = 9;
//	int cnt = 0;
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 8; j++)
//		{
//			if (onest_cnt[j] == i)check_arr[cnt++] = j;
//		}
//	}
//	return true;
//}
//int solveKTUtil(int x, int y, int movei, int sol[X][Y],int xMove[N], int yMove[N])
//{
//	int k, next_x, next_y;
//	int check_arr[8];
//	memset(check_arr, 0, sizeof(check_arr));
//	if (movei == X * Y)
//		return true;
//	printSolution(sol);
//	/* Try all next moves from the current coordinate x, y */
//	
//	checkpoint(x,y,sol, xMove, yMove, check_arr);
//	
//	for (int i= 0; i < 8; i++) 
//	{
//		k = check_arr[i];
//		next_x = x + xMove[k];
//		next_y = y + yMove[k];
//		if (isSafe(next_x, next_y, sol))
//		{
//			sol[next_x][next_y] = movei;
//			
//			if (solveKTUtil(next_x, next_y, movei + 1, sol, xMove, yMove) == true)
//			{
//				return true;
//			}
//			else
//				sol[next_x][next_y] = -1;// backtracking 
//		}
//	}
//	return false;
//}
//
///* Driver program to test above functions */
//int main()
//{
//	solveKT();
//	return 0;
//}