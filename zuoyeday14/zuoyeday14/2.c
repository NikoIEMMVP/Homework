//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int left(char s1[], char s2[], int k)
//{
//	char tmp = 0;
//	int i, j = 0;
//	for (i = 0; i < k ; i++)
//	{
//		char tmp = s1[0];
//		for (j = 0; j < k - 1;j++)
//		{
//			s1[j] = s1[j+1];
//		}
//		s1[k -1] = tmp;
//		if (!(strcmp(s1,s2)))
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	k = strlen(s1);
//	n = left(s1, s2, k);
//	if (n)
//	{
//		printf("s2是s1逆置而成的字符串\n");
//	}
//	else
//	{
//		printf("s2不是s1逆置而成的字符串\n");
//	}
//	system("pause");
//	return 0;
//}