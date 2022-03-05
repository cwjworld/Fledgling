#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//浮点数存储方式
int main()
{
	float f = 5.5f;
	//101.1
	//1.011 * 2 ^ 2
	//s = 0; M = 1.011 E = 2
	//s = 0; M = 011 E = 2 + 127
	//0100 0000 1011 0000 0000 0000 0000 0000
	//40 b0 00 00
	return 0;
}