//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//
//char *my_strncat(char *dest, const char *src,int num)
//{
//	assert(dest);
//	assert(src);
//	assert(num > 0);
//
//	char *dest_ = dest;
//	const char *src_ = src;
//	int i = strlen(src_);
//	while (*dest_)
//	{
//		dest_++;
//	}
//	if (num <= i)
//	{
//		while (num)
//		{
//			*dest_++ = *src_++;
//			num--;
//		}
//	}
//	else
//	{
//		int a = num - i;
//		while (i)
//		{
//			*dest_++ = *src_++;
//			i--;
//		}
//		while (a)
//		{
//			*dest_ = '\0';
//			a--;
//		}
//
//	}
//	return dest;
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入需要拼接的字符数:");
//	scanf("%d", &num);
//
//	char *src = "8888abcde";
//	char dest[100] = "12345abcde";
//	my_strncat(dest, src, num);
//	printf("%s\n", dest);
//	system("pause");
//	return 0;
//}
