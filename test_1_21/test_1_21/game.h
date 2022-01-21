#define _CRT_SECURE_NO_WARNINGS

//头文件的包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//棋盘行列大小的定义
#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerGo(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerGo(char board[ROW][COL], int row, int col);

//判断游戏状态
//1. 玩家赢了 - o
//2. 电脑赢了 - x
//3.  平局    - E
//4. 游戏继续 - C
char IsWin(char board[ROW][COL], int row, int col);

