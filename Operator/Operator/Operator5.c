#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

int main()
{
	int a = 4;
	int b = 5;
	int c = a + b * 7;//���ȼ���������˳��
	return 0;
}

//������ʽ
int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer = fun() - fun() * fun();
	printf("%d\n", answer);
	return 0;
}
