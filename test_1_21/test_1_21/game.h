#define _CRT_SECURE_NO_WARNINGS

//ͷ�ļ��İ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�������д�С�Ķ���
#define ROW 3
#define COL 3

//����������

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerGo(char board[ROW][COL], int row, int col);

//��������
void ComputerGo(char board[ROW][COL], int row, int col);

//�ж���Ϸ״̬
//1. ���Ӯ�� - o
//2. ����Ӯ�� - x
//3.  ƽ��    - E
//4. ��Ϸ���� - C
char IsWin(char board[ROW][COL], int row, int col);

