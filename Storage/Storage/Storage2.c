#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

#include <string.h>

int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	return 0;
}

//浮点型在内存中的存储

int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为: %d\n", n);
	printf("*pFloat的值为: %f\n", *pFloat);

	*pFloat = 9.0;
	printf("num的值为: %d\n", n);
	printf("*pFlaot的值为: %f\n", *pFloat);

	return 0;
}