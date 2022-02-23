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
//��Ѱ汾
//const ���α���,��������ͱ���Ϊ������,����ֱ�ӱ��޸�,���Ǳ����ϻ��Ǳ���
void my_strcpy(char* dest, const char* src)
{
	assert(src != NULL);//����
	assert(dest != NULL);//����
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