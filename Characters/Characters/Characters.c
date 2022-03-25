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

//strcat -- Ҫ���㹻�Ŀռ�׷��,\0Ҳ��׷�ӹ�ȥ,Ŀ��ռ������޸�,���ַ����������Լ����Լ�׷��
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

//strcmp -- �Ƚ��ַ�����С,��󷵻�int
int main()
{
	int ret = strcmp("aqqq", "aaa");
	printf("%d\n", ret);

	return 0;
}

//ģ��ʵ��strcmp
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;;
}
int main()
{
	char* p = "abcdef";
	char* q = "abbb";
	int ret = my_strcmp(p, q);
	if (ret > 0)
	{
		printf("p > q\n");
	}
	else if (ret < 0)
	{
		printf("p < q\n");
	}
	else
	{
		printf("p == q\n");
	}
	return 0;
}

