#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
//1��100�����������г����˶��ٸ�����9
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d", count);

	return 0;
}

//����1/1-1/2+1/3-1/4+1/5����+1/99-1/100��ֵ,��ӡ�����
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}

//��10�������е����ֵ
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];//�����maxҪȡ10����������ĵ�һ��ֵ�����������޷�ʵ��
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d", max);
	return 0;
}

//����Ļ�����99�˷���
int main()
{
	int i = 1;
	//����
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//-2����ʵ�������
		}
		printf("\n");
	}
	return 0;
}
