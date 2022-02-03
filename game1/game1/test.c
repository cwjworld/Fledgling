#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("************************\n");
	printf("******   1.play   *****\n");
	printf("******   0.exit    *****\n");
	printf("************************\n");
}
void game()
{
	//存储数据，需要二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化为空格
	InitBoard(board, ROW, COL);
	//打印棋盘 - 本质是打印数组的内容
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:				
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}