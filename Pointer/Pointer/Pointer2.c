#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>


//野指针
//野指针成因
//1.指针未初始化
int main()
{
	int* p;
	*p = 20;//非法访问了内存
	return 0;
}

 //2.指针越界访问
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 10; i++);
	{
		*p = i;
		p++;
	}//越界
	return 0;
}

//3.指针指向的空间释放


