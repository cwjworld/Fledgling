#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//写一个函数，每调用一次这个函数，就会将num的值+1
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	return 0;
}

//函数的嵌套调用和链式访问(把一个函数的返回值作为另外一个函数的参数)
#include <string.h>
int main()
{
	int len = strlen("abc");
	printf("%d\n", len);

	//链式访问
	printf("%d\n", strlen("abc"));
	return 0;
}

//函数的声明和定义
int main()
{
	int a = 10;
	int b = 20;
	//函数声明
	int Add(int, int);
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}
//函数的定义
int Add(int x, int y)
{
	return x + y;
}



