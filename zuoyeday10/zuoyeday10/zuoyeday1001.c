//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//
//int Count_One_Bits(unsigned int i)
//{
//	int count = 0;
//	while (i)
//	{
//		i = i & (i - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	unsigned int i = 0;
//	int ret = 0;
//	printf("请输入一个非零整数：>");
//	scanf("%d", &i);
//	ret = Count_One_Bits(i);
//	printf("您输入的整数中的二进制位数为 %d 个\n", ret);
//	system("pause");
//	return 0;
//}