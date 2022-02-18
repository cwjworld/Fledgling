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

//指针的运算
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int* pend = arr + 9;

	while (p <= pend)
	{
		printf("%d\n", *p);
		p++; 
	}
	return 0;
}


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);
	//指针减去指针得到的是两个指针之间的元素
	//两个指针需要指向同一块空间
	return 0;
}


