//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//
//
////
////在屏幕上打印杨辉三角。
////1
////1 1
////1 2 1
////1 3 3 1
//
//
//
//void Yang(int n)
//{
//	int i = 0;
//	int j = 0;
//	int **p = (int **)malloc(sizeof(int *) *  n);                          //申请空间 建立二维数组
//	for (i = 0; i < n; i++)
//	{
//		p[i] = (int *)malloc(sizeof(int)* n);
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			p[i][j] = 0;
//		}
//		
//	}
//
//	for (i = 0; i < n; i++)                                              //将竖排和对角线全置为 1
//	{
//		p[i][0] = 1;
//		p[i][i] = 1;
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d\n", p[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < n; i++)                                              //释放所申请的空间
//	{
//		free(p[i]);
//	}
//	free(p);
//
//}
//
//
//int main()
//{
//	int n = 0;
//	printf("Please Enter:");
//	scanf("%d", &n); 
//	Yang(n);
//	system("pause");
//	return 0;
//}