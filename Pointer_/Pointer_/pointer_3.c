#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	(*(void(*)())0)();
	//����0��ַ����һ������
	//�ú����޲�,����������void
	return 0;
}

int main()
{
	void(*signal(int, void(*)(int)))(int);
	//1.signal��()�Ƚ��,˵��signal�Ǻ�����
	//2.signal�����ĵ�һ������������int,�ڶ��������������Ǻ���ָ��
	//�ú���ָ��,ָ��һ������Ϊint,����������void�ĺ���
	//3.signal�����ķ�������Ҳ��һ������ָ��
	//�ú���ָ��,ָ��һ������Ϊint,��������Ϊvoid�ĺ���
	//signal��һ������������
	return 0;
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}


void menu()
{
	printf("*******************************\n");
	printf("*****   1.add   2.sub     *****\n");
	printf("*****   3.mul   4.div     *****\n");
	printf("*****       0.exit        *****\n");
	printf("*******************************\n");
}

int main()
{
	int input = 0;
	do {
		menu();

		int x = 0;
		int y = 0;
		int ret = 0;
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������2��������:>\n");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("ret = %d\n", ret);
			break;
		case 2:
			printf("������2��������:>\n");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("ret = %d\n", ret);
			break;
		case 3:
			printf("������2��������:>\n");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("ret = %d\n", ret);
			break;
		case 4:
			printf("������2��������:>\n");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("ret = %d\n", ret);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ���������ѡ��!\n");
			break;
		}	

	} while (input);
	return 0;
}