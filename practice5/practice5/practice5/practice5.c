#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

#include <math.h>

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ����֮��,����a��һ�����֣�
//����: 2 + 22 + 222 + 2222 + 22222
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d %d", &a, &n);
	int i = 0;
	int sum = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum = sum + ret;
	}
	printf("sum = %d\n", sum);
	return 0;
}


//дһ��������ӡarr���������,��ʹ�������±�,ʹ��ָ��
//arr��һ������һά����

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}

//���0��100000֮��"ˮ�ɻ���"�������
//"ˮ�ɻ���"��ָһ��nλ��,���λ���ֵ�n�η�֮��ǡ�õ��ڸ�������
//��: 153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3,��153��һ��"ˮ�ɻ���"
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//�ж�i�Ƿ�Ϊ������
		//1.����i��λ�� - n
		int n = 1;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp = tmp / 10;
		}
		//2.����i��ÿһλ��n�η�֮��
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp = tmp / 10;
		}
		//3.�ж�
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}