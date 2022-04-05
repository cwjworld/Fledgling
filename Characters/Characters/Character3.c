#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <assert.h>

//memmove -- �ú������Դ����ڴ��ص������
int main()
{
	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
	memmove(arr1 + 2, arr1, 20);
	
	return 0;
}

//ģ��ʵ��memmove 
void* my_memmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		//��ǰ��󿽱�
		while(num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//�Ӻ���ǰ����
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
