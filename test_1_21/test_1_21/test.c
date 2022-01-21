#define _CRT_SECURE_NO_WARNINGS
//引用头文件
#include "game.h"
//菜单函数
void menu()
{
	printf("**********************************\n");
	printf("********       1.play      *******\n");
	printf("********       0.exit      *******\n");
	printf("**********************************\n");
}

void game()
{
	//存储数据 - 二维数组
	char board[ROW][COL];
	//初始化棋盘 - 用空格显示
	InitBoard(board, ROW, COL);
	//打印棋盘 - 本质上是打印二维数组的内容
	DisplayBoard(board, ROW, COL);
	//定义个变量来判断游戏的状态
	char ret = 0;
	while (1)
	{
		//玩家下棋
		PlayerGo(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputerGo(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == 'o')
	{
		printf("恭喜玩家获胜！\n");
	}
	else if (ret == 'x')
	{
		printf("恭喜电脑获胜！\n");
	}
	else
	{
		printf("两方平局！\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //时间戳起点生成一次就可以；
	do
	{
		menu();
		printf("请输入您的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("已成功退出游戏!\n");
			break;
		default:
			printf("请您输入正确的选项！\n");
			break;
		}

	} while (input); //input = 0时为假，退出循环

	return 0;
}