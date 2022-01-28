#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
//函数的递归
void print(unsigned int n)//调用的函数执行完了还要返回执行上一步函数，直到主函数执行完，套娃罢了
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);//print函数可以打印参数部分数字的每一位
	return 0;
}