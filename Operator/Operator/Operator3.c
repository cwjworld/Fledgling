#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", arr[4]);//[]就是下标引用操作符

	return 0;
}

int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	//函数调用
	int ret = Add(a, b);

	return 0;
}

//结构成员访问操作符
//.
//->
struct Book
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	int num = 10;
	struct Book b = {"C语言", "C20210509", 55};
	printf("书名:%s\n", b.name);
	printf("书号:%s\n", b.id);
	printf("定价:%d\n", b.price);
	return 0;
}

struct Book
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	int num = 10;
	struct Book b = { "C语言", "C20210509", 55 };
	struct Book* pb = &b;
	printf("书名:%s\n", pb->name);
	printf("书号:%s\n", pb->id);
	printf("定价:%d\n", pb->price);
	return 0;
}










































