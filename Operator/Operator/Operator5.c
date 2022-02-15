#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

int main()
{
	int a = 4;
	int b = 5;
	int c = a + b * 7;//优先级决定计算顺序
	return 0;
}

//问题表达式
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
