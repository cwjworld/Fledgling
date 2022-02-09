#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 6 / 5;
	printf("%d\n", a);
	float b = 6.0 / 5;
	printf("%f\n", b);
	return 0;
}

int main()
{
	int a = 7 % 3;//只能是两个整数
	printf("%d\n", a);

	return 0;
}

int main()
{
	int a = 2;
	//把a的二进制位向左移动一位,右移同理(右移分为算术右移和逻辑右移)
	int b = a << 1;
	printf("b = %d\n", b);
	return 0;
}

int main()
{
	int a = -1;
	int b = a >> 1;
	//当前的右移操作符的使用采用的是算术右移(负数再在寄存器里面是以补码的形式存放的)
	printf("%d\n", b);
	return 0;
}

int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;//相异为0，相同为同
	printf("c = %d\n", c);
	return 0;
}

int main()
{
	int a = 3;
	int b = 5;
	int c = a | b;//相异为1，相同为同
	printf("c = %d\n", c);
	return 0;
}

int main()
{
	int a = 3;
	int b = 5;
	int c = a ^ b;//相异为1，相同为0
	printf("c = %d\n", c);
	return 0;
}