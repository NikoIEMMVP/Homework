#define _CRT_SECURE_NO_WARNINGS 1	
#include "game.h"

void menu()
{
	printf("**********************\n");
	printf("***    1. play     ***\n");
	printf("***    2. exit     ***\n");
    printf("**********************\n");

}

int main()
{
	int select = 0;
	do
	{
		menu();
		printf("请输入您的选择：>");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			game();
			break;
		case 2:
			exit(0);
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}

	} while (1);

	system("pause");
	return 0;
}