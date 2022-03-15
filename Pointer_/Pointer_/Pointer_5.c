#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

#include <stdlib.h>

//����дһ��ð�������������������ַ���
//bubble_sort_str();
//strcmp

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//ð�����������
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	//����
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	print_arr(arr, sz);
	bubble_sort(arr, sz);
	print_arr(arr, sz);
	return 0;
}


void qsort(void* base, //base�д�ŵ��Ǵ����������е�һ������ĵ�ַ
			size_t num, //��������Ԫ�صĸ���
			size_t size,//����������һ��Ԫ�صĴ�С����λ���ֽ�
			int (*cmp)(const void* e1, const void* e2)//�������Ƚϴ����������е�2��Ԫ�صĺ���
			);


//qsort-�⺯�� - ������

#include <stdlib.h>
#include <string.h>


void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	//�������ݵ�����
	int arr[] = { 1,3,5,7,9,2,4,6,8,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//��ӡ
	print_arr(arr, sz);
}

struct stu
{
	char name[20];
	int age;
};

int sort_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

int sort_by_name(const void*e1, const void*e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

void test2()
{
	//ʹ��qsort��������ṹ������
	struct stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };

	int sz = sizeof(s) / sizeof(s[0]);
	//��������������
	//qsort(s, sz, sizeof(s[0]), sort_by_age);
	//��������������
	qsort(s, sz, sizeof(s[0]), sort_by_name);
}

void swap(char*buf1, char*buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//ģ��qsortʵ��һ��ð�������ͨ���㷨
void bubble_sort(void* base,int sz,int width,int (*cmp)(const void*e1, const void*e2) )
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//һ�˵�����
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�رȽ�
			//arr[j] arr[j+1]
			if (cmp( (char*)base+j*width, (char*)base+(j+1)*width )>0)
			{
				//����
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


void test3()
{
	//�������ݵ�����
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	//��ӡ
	print_arr(arr, sz);
}

void test4()
{
	//ʹ��qsort��������ṹ������
	struct stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };

	int sz = sizeof(s) / sizeof(s[0]);
	//��������������
	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
	//��������������
	bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
}
int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}



int main()
{
	int a = 10;
	char ch = 'w';
	void* p = &a;//�޾�������
	p = &ch;
	//*p;//���ʼ����ֽڣ�
	//p++;//err
	return 0;
}





//sizeof(������) - ��������ʾ���������-���������������Ĵ�С
//&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
//����֮�⣬���е�����������������Ԫ�صĵ�ַ


int main()
{
	int a[] = { 1,2,3,4 };//4*4=16
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4/8 a + 0 �ǵ�һ��Ԫ�صĵ�ַ��sizeof(a + 0)������ǵ�ַ�Ĵ�С
	printf("%d\n", sizeof(*a));//4  *a������ĵ�һ��Ԫ�أ�sizeof(*a)������ǵ�һ��Ԫ�صĴ�С
	printf("%d\n", sizeof(a + 1));//4/8 a + 1�ǵڶ���Ԫ�صĵ�ַ��sizeof(a+1)����ĵ�ַ�Ĵ�С
	printf("%d\n", sizeof(a[1]));//4 - ������ǵڶ���Ԫ�صĴ�С

	printf("%d\n", sizeof(&a)); //4/8 - &a��Ȼ����ĵ�ַ������Ҳ�ǵ�ַ��sizeof(&a)�������һ����ַ�Ĵ�С
	printf("%d\n", sizeof(* &a));//16 - ���������Ĵ�С
	//&a -- int(*p)[4] = &a;
	printf("%d\n", sizeof(&a + 1));//4/8 - &a + 1 ���������Ŀռ�ĵ�ַ
	printf("%d\n", sizeof(&a[0]));//4/8
	printf("%d\n", sizeof(&a[0] + 1));//4/8

	//�ַ�����
	char arr[] = { 'a','b','c','d','e','f' };

	printf("%d\n", strlen(arr));//���ֵ
	printf("%d\n", strlen(arr + 0));//���ֵ
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ-6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1

	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr + 1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8



	char arr[] = "abcdef";
	//[a b c d e f \0]
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//5


	//[a b c d e f \0] 
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8  char(*)[7]
	printf("%d\n", sizeof(&arr + 1));//4/8 
	printf("%d\n", sizeof(&arr[0] + 1));//4/8

	char* p = "abcdef";

	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1));
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));


	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(p + 1));
	//printf("%d\n", sizeof(*p));
	//printf("%d\n", sizeof(p[0]));
	//printf("%d\n", sizeof(&p));
	//printf("%d\n", sizeof(&p + 1));
	//printf("%d\n", sizeof(&p[0] + 1));



	return 0;
}





#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,-10 };
	int min = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("%d\n", min);
	return 0;
}
