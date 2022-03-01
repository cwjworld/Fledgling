#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//int main()
//{
//	//写代码判断当前机器的字节序
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

int main()
{
	int a = -20;
	unsigned int b = 10;
	printf("%d\n", a + b);
	return 0;
}