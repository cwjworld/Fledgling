#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>


//����ָ��
//��һ��ָ�������ָ��
int main()
{
	int a = 10;
	int* pa = &a;
	char ch = 'w';
	char* pc = &ch;

	int arr[10] = { 1,2,3,4,5 };
	&arr;//�����ȡ������ĵ�ַ
	int(*parr)[10] = &arr;
	��ʱ��parr����һ������ָ��
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr);
	//��ַһ��,���������ǲ�һ����
	return 0;
}

void printf1(int(*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5} ,{2,3,4,5,6} ,{3,4,5,6,7} };
	printf1(arr, 3, 5);
	return 0;
}