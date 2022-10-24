#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>


//柔性数组
struct S
{
	int n;
	int arr[];  //柔性数组成员
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
	if (ps == NULL)
	{
		printf("malloc fail!");
		return 1;
	}
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", ps->arr[i]);
	}
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
	if (ptr != NULL)
	{
		ps = ptr;
	}
	return 0;
}
