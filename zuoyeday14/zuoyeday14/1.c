//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void left(char c[], int k, int input)
//{
//	char tmp = 0;
//	int i, j = 0;
//	for (i = 0; i < input; i++)
//	{
//		char tmp = c[0];
//		for (j = 0; j < k - 1;j++)
//		{
//			c[j] = c[j+1];
//		}
//		c[k -1] = tmp;
//	}
//}
//
//
//int main()
//{
//	char c[10] = "ABCDEF";
//	int input = 0;
//	int k = 0;
//	k = strlen(c);
//	printf("%s\n", c);
//	printf("请输入想要逆制的位数(不可大于字符串长度最大值):>");
//	scanf("%d", &input);
//	left(c, k,input);
//	printf("逆置后为：%s",c);
//	printf("\n");
//	system("pause");
//	return 0;
//}