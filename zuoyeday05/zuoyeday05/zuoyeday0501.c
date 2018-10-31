//#define _CRT_SECURE_NO_WARNINGS 1	
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("*************************\n");
//	printf("******  1.play  *********\n");
//	printf("******  0.exit  *********\n");
//	printf("*************************\n");
//}
//
//void game()
//{
//	//生成随机数
//	int ret = 0;
//	int num = 0;
//	ret = rand()%100+1;
//	//猜数字
//	while (1)
//	{
//		printf("请输入一个数字：>");
//		scanf("%d",&num);
//		if (num == ret)
//		{
//			printf("Bingo!\n");
//			break;
//		}
//		else if (num > ret)
//			printf("大\n");
//		else if (num < ret)
//			printf("小\n");
//
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入指令：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		 case 1:
//			 game();
//			  break;
//		 case 0:
//			 printf("退出游戏！\n");
//			 break;
//		default:
//			printf("选择错误，请重新选择!\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}