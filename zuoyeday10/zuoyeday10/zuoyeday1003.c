//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int input = 0;
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 }; 
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int l = 0;
//
//	printf("请输入一个非负整数:>");
//	scanf("%d", &input);
//	while (input)
//	{
//		n = input % 10;
//		input = input / 10;
//		arr1[i] = n;
//		i++;
//	}
//	l = i - 1;
//	for (j = 0; j < i; j++)
//	{
//		arr2[j] = arr1[l];
//		l--;
//	}
//	for (j = 0; j < i; j++)
//	{
//		printf("%5d" , arr2[j]);
//	}
//	 printf("\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0, 1, 2, 3, 4 };
//	int i = 5;
//	for (i = 4; i <= 0; i--)                                           //数组倒着打印  失败！
//	{
//		printf("%d", arr[i]);
//	}
//	system("pause");
//	return 0;
//}