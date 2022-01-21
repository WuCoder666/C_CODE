#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//把每个二维数组元素初始化为空格
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//这里总共打印三个空格：空格+%c+空格
			if (j < col - 1)//需要把最后多余的一列去掉
				printf("|");
		}
		printf("\n");
		if (i < row - 1)//需要把最后多余的一行去掉
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)//需要把最后多余的一列去掉
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerGo(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋:>\n");
	int i = 0;
	int j = 0;
	while (1)
	{
		printf("请您输入下棋的坐标：");
		scanf("%d %d", &i, &j);
		//判断坐标的合法性
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			//再判断坐标是否被占用
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = 'o';
				break;
			}
			else
			{
				printf("坐标已被占用，请重新输入坐标：\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入：\n");
		}

	}
}

void ComputerGo(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:>\n");
	while (1)
	{
		int i = rand() % row;
		int j = rand() % col;
		//判断坐标是否被占用
		if (board[i][j] == ' ')
		{
			board[i][j] = 'x';
			break;
		}
	}
}

//判断棋盘是否已满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘没满
			}
		}
	}
	return 1;//棋盘满了
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return  board[i][1];
		}
	}

	//判断三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}

	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断平局
	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'E';
	}

	//继续
	return 'C';
}