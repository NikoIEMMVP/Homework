//#define _CRT_SECURE_NO_WARNINGS 1		
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//
//
//char* my_strncpy(char *dst, const char *src,int num)
//{
//	char *dst_ = dst;
//	const char *src_ = src;
//	assert(dst);
//	assert(src);
//	
//	int i = strlen(src_);
//	if (num <= i)
//	{
//		while (num)
//		{
//			*dst_ = *src_;
//			dst_++, src_++;
//			num--;
//		}
//	}
//	else
//	{
//		int a = num - i;
//		while (i)
//		{
//			*dst_ = *src_;
//			dst_++, src_++;
//			i--;
//		}
//		while (a)
//		{
//			*dst_ = '\0';
//			dst_++;
//			a--;
//		}
//
//
//	}
//	return dst;
//
//}
//
//int main()
//{
//	int num = 0;
//	printf("ÇëÊäÈë¿½±´×Ö·ûÊý:");
//	scanf("%d", &num);
//	const char *p = "abcde";
//	char arr[100];
//    my_strncpy(arr, p, num);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}         