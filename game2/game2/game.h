#pragma once
#include <stdio.h>
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ����
void DisPlayBoard(char board[ROWS][COLS], int row, int col);