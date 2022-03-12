#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	(*(void(*)())0)();
	//调用0地址处的一个函数
	//该函数无参,返回类型是void
	return 0;
}

int main()
{
	void(*signal(int, void(*)(int)))(int);
	//1.signal和()先结合,说明signal是函数名
	//2.signal函数的第一个参数类型是int,第二个参数的类型是函数指针
	//该函数指针,指向一个参数为int,返回类型是void的函数
	//3.signal函数的返回类型也是一个函数指针
	//该函数指针,指向一个参数为int,返回类型为void的函数
	//signal是一个函数的声明
	return 0;
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}


void menu()
{
	printf("*******************************\n");
	printf("*****   1.add   2.sub     *****\n");
	printf("*****   3.mul   4.div     *****\n");
	printf("*****       0.exit        *****\n");
	printf("*******************************\n");
}

int main()
{
	int input = 0;
	do {
		menu();

		int x = 0;
		int y = 0;
		int ret = 0;
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入2个操作数:>\n");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("ret = %d\n", ret);
			break;
		case 2:
			printf("请输入2个操作数:>\n");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("ret = %d\n", ret);
			break;
		case 3:
			printf("请输入2个操作数:>\n");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("ret = %d\n", ret);
			break;
		case 4:
			printf("请输入2个操作数:>\n");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误，重新选择!\n");
			break;
		}	

	} while (input);
	return 0;
}