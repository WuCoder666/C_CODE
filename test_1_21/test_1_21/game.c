#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//��ÿ����ά����Ԫ�س�ʼ��Ϊ�ո�
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
			printf(" %c ", board[i][j]);//�����ܹ���ӡ�����ո񣺿ո�+%c+�ո�
			if (j < col - 1)//��Ҫ���������һ��ȥ��
				printf("|");
		}
		printf("\n");
		if (i < row - 1)//��Ҫ���������һ��ȥ��
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)//��Ҫ���������һ��ȥ��
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerGo(char board[ROW][COL], int row, int col)
{
	printf("�������:>\n");
	int i = 0;
	int j = 0;
	while (1)
	{
		printf("����������������꣺");
		scanf("%d %d", &i, &j);
		//�ж�����ĺϷ���
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			//���ж������Ƿ�ռ��
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = 'o';
				break;
			}
			else
			{
				printf("�����ѱ�ռ�ã��������������꣺\n");
			}
		}
		else
		{
			printf("����Ƿ������������룺\n");
		}

	}
}

void ComputerGo(char board[ROW][COL], int row, int col)
{
	printf("��������:>\n");
	while (1)
	{
		int i = rand() % row;
		int j = rand() % col;
		//�ж������Ƿ�ռ��
		if (board[i][j] == ' ')
		{
			board[i][j] = 'x';
			break;
		}
	}
}

//�ж������Ƿ�����
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
				return 0;//����û��
			}
		}
	}
	return 1;//��������
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�ж�����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return  board[i][1];
		}
	}

	//�ж�����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}

	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж�ƽ��
	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'E';
	}

	//����
	return 'C';
}