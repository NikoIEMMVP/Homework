//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//
//
////
////����Ļ�ϴ�ӡ������ǡ�
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
//	int **p = (int **)malloc(sizeof(int *) *  n);                          //����ռ� ������ά����
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
//	for (i = 0; i < n; i++)                                              //�����źͶԽ���ȫ��Ϊ 1
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
//	for (i = 0; i < n; i++)                                              //�ͷ�������Ŀռ�
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