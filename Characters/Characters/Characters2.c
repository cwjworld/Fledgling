#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <ctype.h>

//�ַ����ೣ��
int main()
{
	char ch = 'A';
	//isdigit  ����������ַ����ط�0��ֵ��������������ַ�������0
	int ret = isdigit(ch);
	//islower  ����Ǵ�д��ĸ���ط�0��ֵ��������Ǵ�д��ĸ������0
	int ret2 = islower(ch);
	printf("%d\n", ret);
	printf("%d\n", ret2);
	return 0;
}

//�ַ�ת��
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

//�ڴ��������
//memcpy -- �ڴ濽��
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };

	memcpy(arr2, arr1, 20);

	return 0;
}

//ģ��ʵ��memcpy����
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