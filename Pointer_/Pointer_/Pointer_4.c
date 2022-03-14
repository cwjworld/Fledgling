#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stdlib.h>

//回调函数
//方法一
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//冒泡排序趟数
	for (i = 0; i < sz; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	print_arr(arr, sz);
	bubble_sort(arr, sz);
	print_arr(arr, sz);	
	return 0;
}

//方法二
//qsort() --- 快速排序
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//排序
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//打印
	print_arr(arr, sz);
	return 0;
}