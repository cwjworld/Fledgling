#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main()
//{
//	//sizeof�ǲ�����
//	//���Ǻ���
//	//�������ͻ��߱����Ĵ�С
//	printf("%d\n", sizeof(int));
//	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//�������������ܴ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0]));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//
//	printf("%d\n", ~a);
//
//	//~��(������λ)λȡ��
//	//�������ڴ��д���ǲ���
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//����++,��ʹ�ã���++
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	 
//	//int b = ++a;//ǰ��++, ++������1����˼����++����ʹ��
//
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	//ǿ������ת��
//	int a = (int)3.14;
//
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	/*if (a > b)
//		max = a;
//	else
//	    max = b;*/
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//	return 0;
//} 

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);//[]���±����ò�����
//
//	return 0;
//}  

//int main()
//{
//	//���ú�����ʱ�򣬺����������()���Ǻ������ò�����
//	printf("hehe\n");
//
//	return 0;
//}

//�����ض���
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100��
//	u_int num2 = 100;
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//} 


////ָ��
//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ�� - 4���ֽ�
//	printf("%p\n", & a);//&p:ר��������ӡ��ַ	
//	int * pa = &a;//pa��������ŵ�ַ��,��C�����н�pa��ָ�����
//	//*˵��pa��ָ�����
//	//int ˵��paִ�еĶ�����int���͵�
//	return 0;
//}

//ָ����ǵ�ַ
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//	*pa = 20;//*�����ò��� *pa����ͨ��pa��ߵĵ�ַ���ҵ�a
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));//ָ���ж��ռ�ȡ���ڵ�ַ�Ĵ洢��Ҫ���ٿռ�
//	return 0;
//}

struct Stu
{
	char name[20];//��Ա����
	int age;
	double score;
};

//�ṹ�������C���Դ����µ����ͳ���
int main()
{
	struct Stu s = {"����", 20, 85.5};//�ṹ��Ĵ����ͳ�ʼ��
	printf("1��%s, %d, %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
	struct Stu* ps = &s;
	printf("2: %s, %d, %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3: %s, %d, %lf\n,", ps->name, ps->age, ps->score);
	return 0;
}