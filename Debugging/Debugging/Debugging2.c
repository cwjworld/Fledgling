#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 1; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	//代码运行的结果
	return 0;
}
//栈区内存的使用习惯是先使用高地址空间，再使用低地址空间
//数组随着下标的增长是由低到高变化的