#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//�����ĵݹ�
void print(unsigned int n)//���õĺ���ִ�����˻�Ҫ����ִ����һ��������ֱ��������ִ���꣬���ް���
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
	return 0;
}