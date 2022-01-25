#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//写一个函数判断1000-2000年之间哪些年份是闰年
int is_leap_year(int n)//一个函数如果不写返回类型，默认返回int类型
{	
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
	{
		return 1;
	}
	else
	return 0;
}
int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y) == 1)
		{
			printf("%d ", y);
		}
	}
	return 0;
}

//写一个函数，实现一个整形有序数组的二分查找
int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 10;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//找到了就返回找到位置的下标
	//找不到就返回-1
	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了,下标是:%d\n", ret);
	}
	return 0;
}