#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 6 / 5;
	printf("%d\n", a);
	float b = 6.0 / 5;
	printf("%f\n", b);
	return 0;
}

int main()
{
	int a = 7 % 3;//ֻ������������
	printf("%d\n", a);

	return 0;
}

int main()
{
	int a = 2;
	//��a�Ķ�����λ�����ƶ�һλ,����ͬ��(���Ʒ�Ϊ�������ƺ��߼�����)
	int b = a << 1;
	printf("b = %d\n", b);
	return 0;
}

int main()
{
	int a = -1;
	int b = a >> 1;
	//��ǰ�����Ʋ�������ʹ�ò��õ�����������(�������ڼĴ����������Բ������ʽ��ŵ�)
	printf("%d\n", b);
	return 0;
}

int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;//����Ϊ0����ͬΪͬ
	printf("c = %d\n", c);
	return 0;
}

int main()
{
	int a = 3;
	int b = 5;
	int c = a | b;//����Ϊ1����ͬΪͬ
	printf("c = %d\n", c);
	return 0;
}

int main()
{
	int a = 3;
	int b = 5;
	int c = a ^ b;//����Ϊ1����ͬΪ0
	printf("c = %d\n", c);
	return 0;
}