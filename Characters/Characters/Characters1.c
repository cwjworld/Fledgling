#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <assert.h>

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

//模拟实现strstr
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cp = str1;
	
	if (*str2 == '\0')
	{
		return (char*)str1;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++; 
		}
		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "bcd";

	//在arr1中查找是否包含arr2数组
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了: %s\n", ret);
	}
	return 0;
}

//strtok -- 切割字符串
int main()
{
	char arr[] = "zpw@bitedu.tech";
	char* p = "@.";
	char tmp[20] = { 0 };
	strcpy(tmp, arr);

	char* ret = NULL;
	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}

	//ret = strtok(tmp, p);
	//printf("%s\n", ret);

	//ret = strtok(NULL, p);
	//printf("%s\n", ret);

	//ret = strtok(NULL, p);
	//printf("%s\n", ret);

	return 0;
}

//strerror
//使用库函数的时候
//在调用库函数失败的时候,都会设置错误码
//将错误码翻译成对应信息
#include <errno.h>
int main()
{
	//printf("%s\n", strerror(0));
	//printf("%s\n", strerror(1));
	//printf("%s\n", strerror(2));
	//printf("%s\n", strerror(3));
	//printf("%s\n", strerror(4));
	//printf("%s\n", strerror(5));
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	return 0;
}