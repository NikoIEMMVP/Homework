#include "game.h"

void DisplayInterface(char board[][COL], int row)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i < row -1)
		printf("---|---|---\n");
	}
}

void PlayerMove(char board[][COL], int row)
{
	int x = 0;
	int y = 0;
	do
	{
		printf("please enter <x,y>:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'x';
				break;
			}
			else
				printf("此位置已被占用，请重新选择！\n");
		}
		else
			printf("输入错误，请重新输入！");
	} while (1);
}

char IsWin(char board[][COL], int row)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && \
			board[i][1] == board[i][2] && \
			board[i][0] != ' ')
			return board[i][0];
	}
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] && \
			board[1][i] == board[2][i] && \
			board[0][i] != ' ')
			return board[0][i];
	}
	if (board[0][0] == board[1][1] && \
		board[1][1] == board[2][2] && \
		board[0][0] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && \
		board[1][1] == board[2][0] && \
		board[2][0] != ' ')
		return board[1][1];
	if (IsFull(board, ROW))
		return 'q';

	return ' ';

}
	

 void ComputerMove(char board[][COL], int row)
{
	 int x = 0;
	 int y = 0;
	 srand((unsigned int)time(NULL));
	do
	{
		 x = rand() % row;
		 y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'o';
			break;
		}

	} while (1);
}

 int IsFull(char board[][COL], int row)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

 void game()
{
	char ret = 0;
	char board[ROW][COL];
	memset(board, ' ', COL * ROW);
	do{
		system("CLS");
		DisplayInterface(board, ROW);
		PlayerMove(board, ROW);
		ret = IsWin(board, ROW);
		if (ret != ' ')
			break;
		ComputerMove(board, ROW);
		ret = IsWin(board, ROW);
	} while ( ret == ' ');
	if (ret == 'x')
	{
		printf(" Congratulation ! You win ! \n");
		DisplayInterface(board, ROW);
	}
	else if (ret == 'o')
	{
		printf("oh no ! You lose !\n");
		DisplayInterface(board, ROW);
	}
	else if (ret == 'q')
	{
		printf(" ok , No one win !\n");
		DisplayInterface(board, ROW);
	}

}