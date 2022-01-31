#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
//写一个递归函数DigitSum(n),输入一个非负整数，返回组成它的数字之和
int DigitSum(int n)
{
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}
int main()
{
	int num = 1729;
	int sum = DigitSum(num);
	printf("%d\n", sum);
	return 0;
}

//递归实现n的k次方
int Pow(int n, int k)
{
	if (k == 0)
		return 1;
	if (k > 0)
		return n * Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int ret = Pow(n, k);
	printf("%d\n", ret);
	return 0;
}



