#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//打印一个菱形
int main()
{
	int line = 0;
	scanf("%d", &line);
	//上
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印一行
		//空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//下
	for (i = 0; i < line - 1; i++)
	{
		//打印一行
		//空格
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//*
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}


//喝汽水,1瓶其1元,2个空瓶可以换一瓶汽水,给20元,可以喝多少汽水
int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;
	int empty = money;
	//开始置换
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	return 0;
}