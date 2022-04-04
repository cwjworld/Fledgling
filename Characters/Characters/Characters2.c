#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <ctype.h>

//字符分类常数
int main()
{
	char ch = 'A';
	//isdigit  如果是数字字符返回非0的值，如果不是数字字符，返回0
	int ret = isdigit(ch);
	//islower  如果是大写字母返回非0的值，如果不是大写字母，返回0
	int ret2 = islower(ch);
	printf("%d\n", ret);
	printf("%d\n", ret2);
	return 0;
}

//字符转换
int main()
{
	char arr[20] = { 0 };
	scanf("%s", arr);
	int i = 0;
	while (arr[i] != '\0')
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		printf("%c ", arr[i]);
		i++;
	}
	return 0; 
}

//内存操作函数
//memcpy -- 内存拷贝
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };

	memcpy(arr2, arr1, 20);

	return 0;
}

//模拟实现memcpy函数
#include <assert.h>

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	while(num--)
	{
		*(char*)dest = *(char*)src; 
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };

	my_memcpy(arr2, arr1, 20);

	return 0;
}