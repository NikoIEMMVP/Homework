#define _CRT_SECURE_NO_WARNINGS 1	
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 1;
	int **p = (int **)malloc(sizeof(int*)* 2);
	p[1] = 1;
	p[2] = 2;

	system("pause");
	return 0;
}