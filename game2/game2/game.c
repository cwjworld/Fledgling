#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisPlayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------ɨ����Ϸ-------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
		for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1 ; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------ɨ����Ϸ-------\n");
}


void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//����ʮ����
	int count = 10;
	while (count != 0)
	{
		//����������±�
		int x = rand()%row+1;
		int y = rand()%col+1;
		if (mine[x][y] = '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
 
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//�����Ų������
	int x = 0;
	int y = 0;
	printf("������Ҫ�Ų������:>");
	scanf("%d%d", &x, &y);
	//�ж�����ĺϷ���
	while (1)
	{
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//���������ǲ�����
			if (mine[x][y] = '1')
			{
				printf("���ź����㱻ը����");
				DisPlayBoard(mine, row, col);
				break;
			}
			else
			{
				//������ = ͳ��������Χ�м����� - �洢�Ų��׵���Ϣ��show���飬��Ϸ����
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisPlayBoard(show, row, col);
			}
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
	}
}