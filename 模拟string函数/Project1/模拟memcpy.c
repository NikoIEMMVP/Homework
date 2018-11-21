//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//
//void *my_memcpy(const void *dest,const void *src, int num)
//{
//	char *dest_ =(char *) dest;
//	const char *src_ = (const char *)src;
//	while (num)
//	{
//		*dest_ = *src_;
//		dest_++, src_++;
//		num--;
//	}
//	return dest;
//}
//
//int main()
//{
//	char a[66] = "abssssss";
//	char b[66];
//	my_memcpy(a+1, a, strlen(a) + 1);
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}