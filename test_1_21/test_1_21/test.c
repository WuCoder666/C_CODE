#define _CRT_SECURE_NO_WARNINGS
//����ͷ�ļ�
#include "game.h"
//�˵�����
void menu()
{
	printf("**********************************\n");
	printf("********       1.play      *******\n");
	printf("********       0.exit      *******\n");
	printf("**********************************\n");
}

void game()
{
	//�洢���� - ��ά����
	char board[ROW][COL];
	//��ʼ������ - �ÿո���ʾ
	InitBoard(board, ROW, COL);
	//��ӡ���� - �������Ǵ�ӡ��ά���������
	DisplayBoard(board, ROW, COL);
	//������������ж���Ϸ��״̬
	char ret = 0;
	while (1)
	{
		//�������
		PlayerGo(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerGo(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == 'o')
	{
		printf("��ϲ��һ�ʤ��\n");
	}
	else if (ret == 'x')
	{
		printf("��ϲ���Ի�ʤ��\n");
	}
	else
	{
		printf("����ƽ�֣�\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //ʱ����������һ�ξͿ��ԣ�
	do
	{
		menu();
		printf("����������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�ѳɹ��˳���Ϸ!\n");
			break;
		default:
			printf("����������ȷ��ѡ�\n");
			break;
		}

	} while (input); //input = 0ʱΪ�٣��˳�ѭ��

	return 0;
}