#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

//strstr -- ��һ���ַ�����������һ���ַ���
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcd";
	//��arr1�в����Ƿ����arr2����
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("�ҵ���:%s\n", ret);
	}
	return 0;
}