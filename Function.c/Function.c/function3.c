#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//дһ�������ж�1000-2000��֮����Щ���������
int is_leap_year(int n)//һ�����������д�������ͣ�Ĭ�Ϸ���int����
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

//дһ��������ʵ��һ��������������Ķ��ֲ���
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
	//�ҵ��˾ͷ����ҵ�λ�õ��±�
	//�Ҳ����ͷ���-1
	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ���,�±���:%d\n", ret);
	}
	return 0;
}