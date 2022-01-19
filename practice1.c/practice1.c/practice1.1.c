#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//打印1000年到2000年之间的闰年(闰年分为普通闰年和世纪闰年，两种情况都要考虑进去)
int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y < 2000; y++)
	{
		if (y % 4 == 0)
		{
			if (y % 100 != 0)
			{
				printf("%d ", y);
				count++;
			}
		}
		if (y % 400 == 0)
		{
			printf("%d ", y);
			count++;
		}
	} 
	printf("\ncount = %d\n", count);
	return 0;
}
//更高效的可以用for语句&&，||来简化