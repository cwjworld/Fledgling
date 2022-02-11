#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	char arr[10] = { 0 };
//	short s = 5;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));//二者表达的意思是相同的
//	printf("%d\n", sizeof(arr ));//可以计算数组大小，单位依然是字节
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	return 0;
//}
//
//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001-原码
//	//11111111111111111111111111111110-反码
//	//11111111111111111111111111111111-补码
//	//~:按位取反
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = a++;//后置++,先使用,再++
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++,先++,后使用
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int *pa = &a;//pa是用来存放地址的--pa是一个指针变量
//	*pa = 20;//* - 解引用符号 - 间接访问操作符 
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//若&&左边已经确定是假的话，就不会再计算右边的了
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

	//三目操作符
	b = (a > 5 ? 1 : -1);
	return 0;
}











































