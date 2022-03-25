#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

int main()
{
	char arr[] = "abc";
	int len = strlen(arr);//strlen函数的返回值是size_t,是无符号的
	printf("%d\n", len); 
	return 0;
}

//strcpy -- 源字符串必须以'\0'结束,并且要保证目标空间必须足够大且目标空间可变
int main()
{
	char arr[20] = { 0 };
	strcpy(arr, "hello");
	printf("%s\n", arr);
	return 0;
}	

//strcat -- 要有足够的空间追加,\0也被追加过去,目标空间必须可修改,且字符串不可以自己给自己追加
int main()
{
	char arr[20] = "hello ";//world
	strcat(arr, "world");//字符串追加(连接)
	printf("%s\n", arr);
	return 0;
}

//模拟实现strcat
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1.找字符串中的\0;
	while (*dest)
	{
		dest++;
	}
	//2.追加源字符串
	while (*dest++ = *src++)
	{
		;
	} 
	return ret;//返回目标空间的起始地址
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	//my_strcat(arr1, arr2);
	printf("%s\n", my_strcat(arr1, arr2));
	return 0;
}

//strcmp -- 比较字符串大小,最后返回int
int main()
{
	int ret = strcmp("aqqq", "aaa");
	printf("%d\n", ret);

	return 0;
}

//模拟实现strcmp
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

