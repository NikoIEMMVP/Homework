//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

//int my_strlen(const char *str)  //创建计数器
//{
//	int count = 0;
//
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(const char *str)  //使用指针相减方式(指针-指针=两指针之间的元素个数)
//{
//	char *p = str;
//	while (*p)
//		p++;
//	return p - str;
//
//}

//int my_strlen(const char *str)    //递归
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//
//int main()
//{
//	int i = 0;
//	char *str = "abcde";
//	i = my_strlen(str);
//	printf("%d\n", i);
//	system("pause");
//	return 0;
//}