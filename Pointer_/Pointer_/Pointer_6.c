#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

int main()
{
	int a[3][4] = { 0 };
	
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	printf("%d\n", sizeof(a[0] + 1));//4
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	printf("%d\n", sizeof(a + 1));//4
	printf("%d\n", sizeof(*(a + 1)));//16
	printf("%d\n", sizeof(&a[0] + 1));//4
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n", sizeof(*a));//16
	printf("%d\n", sizeof(a[3]));//16
	
	return 0;
}

int main()
{
	short s = 5;
	int a = 4;
	printf("%d\n", sizeof(s = a + 6));//2
	printf("%d\n", s);//5
	return 0;
}

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr + 1));

	return 0;
}

int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFC,-4
	return 0;
}