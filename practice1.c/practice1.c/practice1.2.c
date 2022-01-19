#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//写一个代码：打印100到200之间所有的素数
int main()
{
	int i = 0;
	for(i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}
	return 0;
}