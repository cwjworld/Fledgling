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
}; s1, s2;//s1,s2Ҳ�������ṹ�����
//s1,s2��ȫ�ֱ���
int main()
{
	//s�Ǿֲ�����
	struct Stu s = { {'w', 20, 3.14},"����", 30, 202005034};//����
	//.��->�ṹ���Ա���ʲ�����
	struct Stu* ps = &s;
	printf("%c\n", s.sb.c);
	printf("%c\n", ps->sb.c);
	return 0;
}