//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//
//void *my_memmove(void *dst, const void *src, int num)
//{
//	assert(dst);
//	assert(src);
//
//	char *dst_ = (char *)dst;
//	const char *src_ = (const char *)src;
//
//	if (src_ < dst_ && dst_ < src_ + num)
//	{
//		dst_ = dst_ + num - 1;
//		src_ = src_ + num - 1;
//		while (num)
//		{
//			*dst_ = *src_;
//			dst_--;
//			src_--;
//			num--;
//		}
//	}
//	else
//	{
//		while (num)
//		{
//			*dst_ = *src_;
//			dst_++, src_++;
//			num--;
//		}
//	}
//
//	return dst;
//}
//
//int main()
//{
//	char a[66] = "abcdef123456";
//	char b[66] = "abcdef123456";
//	my_memmove(a + 1, a, strlen(a) + 1);
//	my_memmove(b, b + 1, strlen(b) + 1);
//	printf("%s\n", a);
//	printf("%s\n", b);
//	system("pause");
//	return 0;
//}