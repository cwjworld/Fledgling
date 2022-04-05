#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <assert.h>

//memmove -- 该函数可以处理内存重叠的情况
int main()
{
	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
	memmove(arr1 + 2, arr1, 20);
	
	return 0;
}

//模拟实现memmove 
void* my_memmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		//从前向后拷贝
		while(num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//从后向前拷贝
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}

int main()
{
	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1 + 2, arr1, 20);

	return 0;
}
