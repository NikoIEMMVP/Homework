//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//
//int my_strncmp(const char *str1, const char *str2, int num)
//{
//	assert(str1);
//	assert(str2);
//	assert(num > 0);
//
//	int ret = 0;
//	while (num && (!(ret = *(const unsigned char *)str1 - *(const unsigned char *)str2)) && *str1)           //循环条件：判断两字符相等且不为空
//	{
//		str1++;
//		str2++;
//	}
//	if (ret > 0)
//		return 1; 
//	else if (ret < 0)
//		return -1;
//	else
//		return (ret);
//
//	//while (*str1 && *str2)
//	//{
//	//	if (*str1 > *str2)
//	//		return 1;
//	//	else if (*str1 < *str2)        
//	//		return -1;
//	//	else
//	//	{
//
//	//	}
//	//	str1++, str2++;
//	//}
//	//if (*str1 > *str2)
//	//	return 1;
//	//else if (*str1 < str2)
//	//	return -1;
//	//else
//	//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入要比较的字符数:");
//	scanf("%d", &num);
//
//	const char *str1 = "abbbcd";
//	const char *str2 = "addddd";
//	int ret = my_strncmp(str1, str2, num);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}