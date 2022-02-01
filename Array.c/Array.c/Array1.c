#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//一维数组在内存中的储存(连续存放的)
//%p - 是按照地址的格式打印的
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("&arr[%d] = %p\n", &arr[i]);
	}
	return 0;
}

//二维数组
int main()
{
	int arr[][4] = { {1,2}, {3,4}, {5,6} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


int main()
{
	int arr[][4] = { {1,2}, {3,4}, {5,6} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("arr[%d][%d]=%p\n",i, j, &arr[i][j]);
		}
	}
	return 0; 
}