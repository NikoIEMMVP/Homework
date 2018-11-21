//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//
//
//
//
//遍历数组中所有数字
//
//int main()
//{
//	int arr[14] = { 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 5, 6, 7 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i,j = 0;
//	int count = 0;
//	for (i = 0; i < size; i++)
//	{
//		count = 0;
//		for (j = 0; j < size ; j++)
//		{
//			if (0 == (arr[i] ^ arr[j]))
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//			printf("%d\n", arr[i]);
//	}
//
//	system("pause");
//	return 0;
//}