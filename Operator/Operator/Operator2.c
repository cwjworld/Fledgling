#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	char arr[10] = { 0 };
//	short s = 5;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));//���߱�����˼����ͬ��
//	printf("%d\n", sizeof(arr ));//���Լ��������С����λ��Ȼ���ֽ�
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	return 0;
//}
//
//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001-ԭ��
//	//11111111111111111111111111111110-����
//	//11111111111111111111111111111111-����
//	//~:��λȡ��
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = a++;//����++,��ʹ��,��++
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++,��++,��ʹ��
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int *pa = &a;//pa��������ŵ�ַ��--pa��һ��ָ�����
//	*pa = 20;//* - �����÷��� - ��ӷ��ʲ����� 
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//��&&����Ѿ�ȷ���ǼٵĻ����Ͳ����ټ����ұߵ���
//	printf("a = %d\n b = %d\n c=%d\n d = %d\n",a, b, c, d);
//
//	return 0;
//}


int main()
{
	int a = 3;
	int b = 0;
	if (a > 5)
		b = 1;
	else
		b = -1;

	//��Ŀ������
	b = (a > 5 ? 1 : -1);
	return 0;
}











































