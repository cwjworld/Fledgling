#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>


//Ұָ��
//Ұָ�����
//1.ָ��δ��ʼ��
int main()
{
	int* p;
	*p = 20;//�Ƿ��������ڴ�
	return 0;
}

 //2.ָ��Խ�����
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 10; i++);
	{
		*p = i;
		p++;
	}//Խ��
	return 0;
}

//3.ָ��ָ��Ŀռ��ͷ�


