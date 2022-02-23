#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

#include <assert.h>

void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
 }
void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest++ = *src++;	
	}
	*dest = *src;
}
//最佳版本
//const 修饰变量,这个变量就被成为常变量,不能直接被修改,但是本质上还是变量
void my_strcpy(char* dest, const char* src)
{
	assert(src != NULL);//断言
	assert(dest != NULL);//断言
	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char arr1[20] = "xxxxxxxxxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}