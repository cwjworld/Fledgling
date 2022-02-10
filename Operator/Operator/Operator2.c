#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 10;
	char arr[10] = { 0 };
	short s = 5;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));//二者表达的意思是相同的
	printf("%d\n", sizeof(arr ));//可以计算数组大小，单位依然是字节
	printf("%d\n", sizeof(s = a + 2));
	printf("%d\n", s);
	return 0;
}

int main()
{
	int a = -1;
	//10000000000000000000000000000001-原码
	//11111111111111111111111111111110-反码
	//11111111111111111111111111111111-补码
	//~:按位取反
	int b = ~a;
	printf("%d\n", b);
	return 0;
}

int main()
{
	int a = 10;
	int b = a++;//后置++,先使用,再++
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}

int main()
{
	int a = 10;
	int b = ++a;//前置++,先++,后使用
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}











































