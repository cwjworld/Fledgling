#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
//输入任意数字，打印乘法表
void print_table(int n)
{  
	int i = 0;
	for (i = 1; i <= n; i++)
	{	
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("% d * %d = % d", i, j, i * j);
		}
		printf("\n");
	}

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);

	return 0;
}

//将参数字符串中的字符反向排序，不是逆序打印
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* str)
{
	int left = 0;
	int right = my_strlen(str) - 1;
	while (left < right)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}