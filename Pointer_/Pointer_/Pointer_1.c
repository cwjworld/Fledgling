#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>


//数组指针
//是一种指向数组的指针
int main()
{
	int a = 10;
	int* pa = &a;
	char ch = 'w';
	char* pc = &ch;

	int arr[10] = { 1,2,3,4,5 };
	&arr;//这才是取出数组的地址
	int(*parr)[10] = &arr;
	此时的parr就是一个数组指针
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr);
	//地址一样,但是类型是不一样的
	return 0;
}

void printf1(int(*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5} ,{2,3,4,5,6} ,{3,4,5,6,7} };
	printf1(arr, 3, 5);
	return 0;
}