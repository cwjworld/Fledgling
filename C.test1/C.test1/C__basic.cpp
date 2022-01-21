#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//int main()
//{
//	//sizeof是操作符
//	//不是函数
//	//计算类型或者变量的大小
//	printf("%d\n", sizeof(int));
//	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
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
//	//~按(二进制位)位取反
//	//整数在内存中存的是补码
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++,先使用，再++
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	 
//	//int b = ++a;//前置++, ++是自增1的意思，先++，后使用
//
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	//强制类型转化
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
//	printf("%d\n", arr[5]);//[]是下标引用操作符
//
//	return 0;
//}  

//int main()
//{
//	//调用函数的时候，函数名后面的()就是函数调用操作符
//	printf("hehe\n");
//
//	return 0;
//}

//类型重定义
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100；
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

//extern声明外部符号
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


////指针
//int main()
//{
//	int a = 10;//a在内存中要分配空间的 - 4个字节
//	printf("%p\n", & a);//&p:专门用来打印地址	
//	int * pa = &a;//pa是用来存放地址的,在C语言中叫pa是指针变量
//	//*说明pa是指针变量
//	//int 说明pa执行的对象是int类型的
//	return 0;
//}

//指针就是地址
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//	*pa = 20;//*解引用操作 *pa就是通过pa里边的地址，找到a
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
//	printf("%d\n", sizeof(double*));//指针有多大空间取决于地址的存储需要多少空间
//	return 0;
//}

struct Stu
{
	char name[20];//成员变量
	int age;
	double score;
};

//结构体可以让C语言创建新的类型出来
int main()
{
	struct Stu s = {"张三", 20, 85.5};//结构体的创建和初始化
	printf("1：%s, %d, %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
	struct Stu* ps = &s;
	printf("2: %s, %d, %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3: %s, %d, %lf\n,", ps->name, ps->age, ps->score);
	return 0;
}