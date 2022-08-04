#define _CRT_SECURE_NO_WARNINGS 1 

#include "SeqList.h"

void TestSeqList1()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPushBack(&s, 6);
	SLPrint(&s);

	SLPushFront(&s, 10);
	SLPushFront(&s, 20);
	SLPushFront(&s, 30);
	SLPrint(&s);

	SLDestory(&s);
}

void TestSeqList2()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPrint(&s);

	SLPopBack(&s);
	SLPopBack(&s);
	SLPrint(&s);

	SLPopBack(&s);
	SLPopBack(&s);
	SLPrint(&s);

	//SLPopBack(&s);
	//SLPrint(&s);

	SLPushBack(&s, 10);
	SLPushBack(&s, 20);
	SLPushBack(&s, 30);
	SLPushBack(&s, 40);
	SLPrint(&s);

	SLDestory(&s);
}

void TestSeqList3()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPrint(&s);

	SLPopFront(&s);
	SLPopFront(&s);
	SLPrint(&s);

	SLPopFront(&s);
	SLPopFront(&s);
	SLPrint(&s);

	SLPushBack(&s, 10);
	SLPushBack(&s, 20);
	SLPushBack(&s, 30);
	SLPushBack(&s, 40);
	SLPrint(&s);

	int* p1 = (int*)malloc(sizeof(int) * 10);
	assert(p1);
	printf("p1:%p\n", p1);

	int* p2 = (int*)realloc(p1, sizeof(int) * 5);
	assert(p2);
	printf("p2:%p\n", p2);
}

void TestSeqList4()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPrint(&s);

	//SLInsert(&s, 2, 30);
	SLInsert(&s, 0, 30);
	SLPrint(&s);

	int x = 0;
	scanf("%d", &x);
	int pos = SLFind(&s, x);
	if (pos != -1)
	{
		SLInsert(&s, pos, x * 100);
	}
	SLPrint(&s);
}

void TestSeqList5()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);
	SLPushBack(&s, 5);
	SLPrint(&s);

	SLErase(&s, 0);
	SLPrint(&s);

	int x = 0;
	scanf("%d", &x);
	int pos = SLFind(&s, x);
	if (pos != -1)
	{
		SLErase(&s, pos);
	}
	SLPrint(&s);
}

void memu()
{
	printf("**********************************************\n");
	printf("*******   1、尾插数据    2、头插数据   *******\n");
	printf("*******   3、头删数据    4、尾删数据   *******\n");
	printf("*******   5、寻找数据    6、插入数据   *******\n");
	printf("*******   7、删除数据    8、修改数据   *******\n");
	printf("*******   9、打印数据   -1、退出       *******\n");
	printf("**********************************************\n");
}

int main()
{
	SL s;
	SLInit(&s);
	int option = 0;
	int x = 0;
	do
	{
		memu();
		printf("请输入你的操作:>");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("请连续输入你要插入的数据，以-1结束\n");
			scanf("%d", &x);
			while (x != -1)
			{
				SLPushBack(&s, x);
				scanf("%d", &x);
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			SLPrint(&s);
			break;
		default:
			break;
		}

	} while (option != -1);

	SLDestory(&s);

	return 0;
}