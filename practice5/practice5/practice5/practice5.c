#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

#include <math.h>

//求Sn = a + aa + aaa + aaaa + aaaaa的前五项之和,其中a是一个数字，
//例如: 2 + 22 + 222 + 2222 + 22222
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d %d", &a, &n);
	int i = 0;
	int sum = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum = sum + ret;
	}
	printf("sum = %d\n", sum);
	return 0;
}


//写一个函数打印arr数组的内容,不使用数组下标,使用指针
//arr是一个整型一维数组

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}

//求出0～100000之间"水仙花数"并输出。
//"水仙花数"是指一个n位数,其各位数字的n次方之和恰好等于该数本身
//如: 153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3,则153是一个"水仙花数"
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断i是否为自幂数
		//1.计算i的位数 - n
		int n = 1;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp = tmp / 10;
		}
		//2.计算i的每一位的n次方之和
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp = tmp / 10;
		}
		//3.判断
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}