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
	//�洢���ݣ���Ҫ��ά����
	char board[ROW][COL];
	//��ʼ������ - ��ʼ��Ϊ�ո�
	InitBoard(board, ROW, COL);
	//��ӡ���� - �����Ǵ�ӡ���������
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:				
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}