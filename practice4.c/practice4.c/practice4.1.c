#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//统计二进制中1的个数(负数用补码表示)
int numberof1(int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}//只适用于正数

//改进的版本
int NumberOf1(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((n >> i) & 1)
		{
			count++;
		}
	}
	return count;
}

//更好的版本
int NumberOf1(int n)
{
	int count = 0;
	int i = 0;
	while(n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = -1;

	int ret = NumberOf1(n);

	printf("ret = %d\n", ret);
	return 0;
}

//求两位数中二进制不同位的个数
//版本1
int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	scanf("%d %d", &m, &n);
	for (i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}

//版本2
int NumberOf1(int n)
{
	int count = 0;
	int i = 0;
	while(n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	int ret = m ^ n;//异或^:相同为0,相异为1
	count = NumberOf1(ret);
	scanf("%d %d", &m, &n);
	printf("%d\n", count);
	 
	//统计ret的二进制中有几个1,就证明m和n的二进制中有几个位不同
	return 0;
}

int main()
{
	int n = 0;
	scanf("&d", &n);
	//获取n中二进制中的奇数位和偶数位
	return 0;
}
