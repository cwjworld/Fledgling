#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <assert.h>

//strlen 是求字符串长度的
//my_strlen
int my_strlen(const char* arr)
{
	int count = 0;
	assert(arr != NULL);
	while (*arr++ != 0)
	{
		count++;
	}	
	return count;
}

int main()
{
	char arr[] = "*********";
	printf("%d\n", my_strlen(arr));
	return 0;
}