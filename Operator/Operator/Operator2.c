#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 10;
	char arr[10] = { 0 };
	short s = 5;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));//���߱�����˼����ͬ��
	printf("%d\n", sizeof(arr ));//���Լ��������С����λ��Ȼ���ֽ�
	printf("%d\n", sizeof(s = a + 2));
	printf("%d\n", s);
	return 0;
}

int main()
{
	int a = -1;
	//10000000000000000000000000000001-ԭ��
	//11111111111111111111111111111110-����
	//11111111111111111111111111111111-����
	//~:��λȡ��
	int b = ~a;
	printf("%d\n", b);
	return 0;
}

int main()
{
	int a = 10;
	int b = a++;//����++,��ʹ��,��++
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}

int main()
{
	int a = 10;
	int b = ++a;//ǰ��++,��++,��ʹ��
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}











































