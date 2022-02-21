#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//Debug版本是可调试的
//Release版本是不可调试的
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i + 1;
	}

	return 0;
} 

//调用堆栈
void test2()
{
	printf("hehe\n");
}
void test1()
{
	test2;
}
void test()
{
	test1();
}
int main()
{
	test();
	return 0;
}