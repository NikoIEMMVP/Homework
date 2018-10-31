//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i = 0;
//	int flag = 0;
//	int key = 0;
//	int arr[100] = { 0 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	for (i = 0; i < 99; i++)
//	{
//		arr[i+1] = arr[i] + 2;
//		printf("%5d", arr[i]);
//	}
//	printf("ÇëÊäÈë¹Ø¼ü×Ö:>");
//	scanf("%d",&key);
//	if (key < arr[left] || key > arr[right])
//		flag = -1;
//	else
//	{
//		while (left <= right)
//		{
//			int mid = left + (right - left) / 2;
//			if (key > arr[mid])
//			{
//				left = mid + 1;
//			}
//			else if (key < arr[mid])
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				printf("Bingo!\n");
//				flag = mid; \
//					break;
//			}
//			if (left > right)
//				flag = -1;
//		}
//	}
//		printf("%d", flag);
//
//	system("pause");
//	return 0;
//}