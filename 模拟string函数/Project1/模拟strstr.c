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
//	while (*p)                        //ѭ������ ����Ҫ���ҵ��ַ���
//	{
//		p = str;            
//		sp = sub_str;
//		while (*p == *sp && *p && *sp)              //��ֹ���ܳ��ֵ�Խ�����
//		{
//			p++;
//			sp++;
//		}
//		if (*sp == '\0')               //���ҵ��Ӵ�����
//			return str;
//		str++;                          //����ʧ�ܣ���ʼ��һ�β���
//	}
//	return NULL;             //��û�з��ϵ��Ӵ� ����NULL
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