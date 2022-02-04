#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//符号的定义
#define ROW 3	
#define COL 3

//函数的声明
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断游戏是否有输赢
char IsWin(char board[ROW][COL], int row, int col);

