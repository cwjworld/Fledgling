#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

void test(int** p2)
{
	**p2 = 20;
}

int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	//����ָ�봫��
	test(ppa);
	test(&pa);//��һ��ָ������ĵ�ַ
	int* arr[10] = { 0 };
	test(arr);//�����һ��ָ�������
	printf("%d\n", a);
	return 0;
}


//����ָ��
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int* pa = &a;

	char ch = 'w';
	char* pc = &ch;

	int arr[10] = { 0 };
	int(*parr)[10] = &arr;
	//parr��ָ�������ָ��

	//����ָ�� -- ��ź�����ַ��ָ��
	//&������ -- ȡ���ľ��Ǻ����ĵ�ַ
	//pf����һ������ָ��ı���
	int (*pf)(int, int) = &Add;
	printf("%p\n", &Add);
	printf("%p\n", Add);
	//������ != &������
	//������ = &������
	return 0;
}

