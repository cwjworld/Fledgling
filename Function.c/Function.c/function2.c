#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//����������ֵ����ֵ
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	    z = x;
//	else
//		z = y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//�����������α�����ֵ
//�����������͵ĵط�д��:void,��ʾ��������������κ�ֵ,Ҳ����Ҫ����
void Swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 10;
	int b = 20;
	//дһ�����������������α�����ֵ
	printf("����ǰ a=%d b=%d\n", a, b);
	Swap(&a, &b);
	printf("������ a=%d b=%d\n", a, b);

	return 0;
}