#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

int main()
{
	//д�����жϵ�ǰ�������ֽ���
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}

	return 0;
}



