//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

//int my_strlen(const char *str)  //����������
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

//int my_strlen(const char *str)  //ʹ��ָ�������ʽ(ָ��-ָ��=��ָ��֮���Ԫ�ظ���)
//{
//	char *p = str;
//	while (*p)
//		p++;
//	return p - str;
//
//}

//int my_strlen(const char *str)    //�ݹ�
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