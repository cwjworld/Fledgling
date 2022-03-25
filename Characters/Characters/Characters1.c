#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//strstr -- 在一个字符串中找另外一个字符串
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcd";
	//在arr1中查找是否包含arr2数组
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了:%s\n", ret);
	}
	return 0;
}