#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;//拿到的是a的4个字节中第一个字节的地址
	*pa = 20;
	printf("%p\n", *pa);
	return 0;
}

int main()
{
	int* pa;
	char* pc;
	float* pf;

	printf("%d\n", sizeof(pa));
	printf("%d\n", sizeof(pc));
	printf("%d\n", sizeof(pf));
	return 0;
}

//指针类型的意义
//1.指针类型决定了解引用的权限
//2.指针类型决定了指针走一步走多远
int main()
{
	int a = 0x11223344;
	int* pa = a;
	*pa = 0;
	return 0; 
}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	char* pc = arr;//
	printf("%d\n", p);
	printf("%d\n", p + 1);

	printf("%d\n", pc);
	printf("%d\n", pc + 1);
	return 0;
}