//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//
//void init(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//  printf("��Ծ������Ԫ�ص�������г�ʼ����>");
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &j);
//		arr[i] = j;
//		j = 0;
//	}
//}
//
//void reverse(int* arr, int sz)
//{
//	int i = 0;
//	int temp = 0;
//	int left = 0;
//	int right = sz - 1;
//	printf("���ú������Ϊ��>\n");
//	for (i = 0; i < sz; i++)
//	{
//		while (left < right)
//		{
//			temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;
//			right--;
//		}
//	}
//}
//
//void empty(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	printf("�������ʼ����������֣�>");
//	scanf("%d", &j);
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = j;
//	}
//}
//int main()
//{
//	int i = 0;
//	int sz = 0;
//	int arr[5] = { 0 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d] = %d\n", i , arr[i]);
//	}
//	init(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d] = %d\n", i , arr[i]);
//	}
//	reverse(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}
//	empty(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d] = %d\n", i , arr[i]);
//	}
//	system("pause");
//	return 0;
//}