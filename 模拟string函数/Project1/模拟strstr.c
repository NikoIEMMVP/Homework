//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//
//char *my_strstr(const char *str, const char *sub_str)
//{
//	assert(str);
//	assert(sub_str);
//
//	char *p = str;
//	char *sp = sub_str;
//
//	while (*p)                        //循环条件 遍历要查找的字符串
//	{
//		p = str;            
//		sp = sub_str;
//		while (*p == *sp && *p && *sp)              //防止可能出现的越界访问
//		{
//			p++;
//			sp++;
//		}
//		if (*sp == '\0')               //查找到子串条件
//			return str;
//		str++;                          //查找失败，开始下一次查找
//	}
//	return NULL;             //若没有符合的子串 返回NULL
//}
//
//int main()
//{
//	const char *str = "abcd123xyz1234qwer";
//	const char *sub_str = "1234";
//
//	char *ret = my_strstr(str, sub_str);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}   