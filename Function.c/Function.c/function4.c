#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//дһ��������ÿ����һ������������ͻὫnum��ֵ+1
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	return 0;
}

//������Ƕ�׵��ú���ʽ����(��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���)
#include <string.h>
int main()
{
	int len = strlen("abc");
	printf("%d\n", len);

	//��ʽ����
	printf("%d\n", strlen("abc"));
	return 0;
}

//�����������Ͷ���
int main()
{
	int a = 10;
	int b = 20;
	//��������
	int Add(int, int);
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}
//�����Ķ���
int Add(int x, int y)
{
	return x + y;
}



