#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", arr[4]);//[]�����±����ò�����

	return 0;
}

int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int b = 20;
	//��������
	int ret = Add(a, b);

	return 0;
}

//�ṹ��Ա���ʲ�����
//.
//->
struct Book
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	int num = 10;
	struct Book b = {"C����", "C20210509", 55};
	printf("����:%s\n", b.name);
	printf("���:%s\n", b.id);
	printf("����:%d\n", b.price);
	return 0;
}

struct Book
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	int num = 10;
	struct Book b = { "C����", "C20210509", 55 };
	struct Book* pb = &b;
	printf("����:%s\n", pb->name);
	printf("���:%s\n", pb->id);
	printf("����:%d\n", pb->price);
	return 0;
}










































