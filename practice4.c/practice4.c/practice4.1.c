#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//ͳ�ƶ�������1�ĸ���(�����ò����ʾ)
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
}//ֻ����������

//�Ľ��İ汾
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

//���õİ汾
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

//����λ���ж����Ʋ�ͬλ�ĸ���
//�汾1
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

//�汾2
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
	int ret = m ^ n;//���^:��ͬΪ0,����Ϊ1
	count = NumberOf1(ret);
	scanf("%d %d", &m, &n);
	printf("%d\n", count);
	 
	//ͳ��ret�Ķ��������м���1,��֤��m��n�Ķ��������м���λ��ͬ
	return 0;
}

int main()
{
	int n = 0;
	scanf("&d", &n);
	//��ȡn�ж������е�����λ��ż��λ
	return 0;
}
