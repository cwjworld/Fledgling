#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
//1到100的所有整数中出现了多少个数字9
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d", count);

	return 0;
}

//计算1/1-1/2+1/3-1/4+1/5……+1/99-1/100的值,打印出结果
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}

//求10个整数中的最大值
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];//这里的max要取10个整数里面的第一个值，否则负数则无法实现
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d", max);
	return 0;
}

//在屏幕中输出99乘法表
int main()
{
	int i = 1;
	//行数
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//-2可以实现左对齐
		}
		printf("\n");
	}
	return 0;
}
