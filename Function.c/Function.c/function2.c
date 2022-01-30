#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//求出两个数字的最大值
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	    z = x;
//	else
//		z = y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//交换两个整形变量的值
//函数返回类型的地方写出:void,表示这个函数不返回任何值,也不需要返回
void Swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;
	int b = 20;
	//写一个函数交换两个整形变量的值
	printf("交换前 a=%d b=%d\n", a, b);
	Swap(&a, &b);
	printf("交换后 a=%d b=%d\n", a, b);

	return 0;
}