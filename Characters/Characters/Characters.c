#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

int main()
{
	char arr[] = "abc";
	int len = strlen(arr);//strlen�����ķ���ֵ��size_t,���޷��ŵ�
	printf("%d\n", len); 
	return 0;
}

//strcpy -- Դ�ַ���������'\0'����,����Ҫ��֤Ŀ��ռ�����㹻����Ŀ��ռ�ɱ�
int main()
{
	char arr[20] = { 0 };
	strcpy(arr, "hello");
	printf("%s\n", arr);
	return 0;
}	

//strcat -- Ҫ���㹻�Ŀռ�׷��,\0Ҳ��׷�ӹ�ȥ,Ŀ��ռ������޸�
int main()
{
	char arr[20] = "hello ";//world
	strcat(arr, "world");//�ַ���׷��(����)
	printf("%s\n", arr);
	return 0;
}

//ģ��ʵ��strcat
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1.���ַ����е�\0;
	while (*dest)
	{
		dest++;
	}
	//2.׷��Դ�ַ���
	while (*dest++ = *src++)
	{
		;
	} 
	return ret;//����Ŀ��ռ����ʼ��ַ
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	//my_strcat(arr1, arr2);
	printf("%s\n", my_strcat(arr1, arr2));
	return 0;
}