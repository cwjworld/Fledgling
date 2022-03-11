#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

void test(int** p2)
{
	**p2 = 20;
}

int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	//二级指针传参
	test(ppa);
	test(&pa);//传一级指针变量的地址
	int* arr[10] = { 0 };
	test(arr);//传存放一级指针的数组
	printf("%d\n", a);
	return 0;
}


//函数指针
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int* pa = &a;

	char ch = 'w';
	char* pc = &ch;

	int arr[10] = { 0 };
	int(*parr)[10] = &arr;
	//parr是指向数组的指针

	//函数指针 -- 存放函数地址的指针
	//&函数名 -- 取到的就是函数的地址
	//pf就是一个函数指针的变量
	int (*pf)(int, int) = &Add;
	printf("%p\n", &Add);
	printf("%p\n", Add);
	//数组名 != &数组名
	//函数名 = &函数名
	return 0;
}

