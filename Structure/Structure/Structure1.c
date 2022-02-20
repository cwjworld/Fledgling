#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

struct B
{
	char c;
	short s;
	double d;
};
struct Stu
{
	struct B sb;
	char name[20];
	int age;
	char id[20];
}; s1, s2;//s1,s2也是两个结构体变量
//s1,s2是全局变量
int main()
{
	//s是局部变量
	struct Stu s = { {'w', 20, 3.14},"张三", 30, 202005034};//对象
	//.和->结构体成员访问操作符
	struct Stu* ps = &s;
	printf("%c\n", s.sb.c);
	printf("%c\n", ps->sb.c);
	return 0;
}