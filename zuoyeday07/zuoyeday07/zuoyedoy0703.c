//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//
//char leapyear(int year)                           // ��������ַ������أ�ʧ�ܣ�
//{
//	char i[10] = { 0 };
//	if (0 == year % 4)
//	{
//		if (0 == year % 100)
//		{
//			if (0 == year % 400)               
//				i = "Yes";
//			else
//				i = "No";
//			
//		}
//		i = "Yes";
//	}
//	return i;
//}
//
//int leapyear(int year)                                // ����
//{
//	int i = 0;
//		if ((year / 4) > 0)
//		{
//			if ( (year / 100) > 0)                         
//			{
//				if ((year / 400) > 0)
//					i = 1;
//				else i = 0;
//			}
//			i = 1;
//		}
//}
//int leapyear(int year)                        // ����
//{
//	int i = 0;
//	if (year >= 400)
//	{
//		if (0 == year % 4)
//		{
//			if (0 == year % 100)
//			{
//				if (0 == year % 400)
//					i = 1;
//				else
//					i = 0;
//			}                                                
//			i = 1;
//		}
//	}
//	else if (year >= 100)
//	{
//		if (0 == year % 4)
//		{
//			if (0 == year % 100)
//			{
//				i = 0;
//			}
//			else
//				i = 1;
//		}
//		else
//			i = 0;
//	}
//	else
//	{
//		if (0 == year % 4)
//			i = 1;
//		else i = 0;
//
//	}
//	return i;
//}
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	printf("������һ����Ҫ���ж��Ƿ�Ϊ�������ݣ�>");
//	scanf("%d", &year);
//	ret = leapyear(year);
//	if (ret)
//		printf("%d������\n", year);
//	else
//		printf("%d��������\n", year);
//	system("pause");
//	return 0;
//}
