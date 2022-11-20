#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "Queue.h"

// ͨ��ǰ�����������"ABD##E#H##CF##G##"����������
BTNode* BinaryTreeCreate(BTDataType* a, int* pi)
{
	if (a[*pi] == '#')
	{
		(*pi)++;
		return NULL;
	}

	BTNode* root = (BTNode*)malloc(sizeof(BTNode));

	if (root == NULL)
	{
		perror("malloc fail!");
		return NULL;
	}

	root->data = a[*pi];
	(*pi)++;
	root->_left = BinaryTreeCreate(a, pi);
	root->_right = BinaryTreeCreate(a, pi);
	return root;
}

// �������ڵ����
int BinaryTreeSize(BTNode* root)
{
	return root == NULL ? 0 :
		BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}

// ������Ҷ�ӽڵ����
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->_left == NULL
		&& root->_right == NULL)
	{
		return 1;
	}
	return BinaryTreeLeafSize(root->_left)
		+ BinaryTreeLeafSize(root->_right);
}

// ��������k��ڵ����
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	assert(k > 0);

	if (root == NULL)
	{
		return 0;
	}

	if (k == 1)
	{
		return 1;
	}

	return BinaryTreeLevelKSize(root->_left, k - 1)
		+ BinaryTreeLevelKSize(root->_right, k - 1);
}

// ����������ֵΪx�Ľڵ�
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	BTNode* lret, * rret;
	if (root == NULL)
	{
		return NULL;
	}

	if (root->data == x)
	{
		return 1;
	}

	lret = BinaryTreeFind(root->_left, x);
	if (lret)
	{
		return lret;
	}

	rret = BinaryTreeFind(root->_right, x);
	if (rret)
	{
		return rret;
	}

	return NULL;
}

// ������ǰ����� 
void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL");
		return;
	}

	printf("%d ", root->data);
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
}

// �������������
void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	BinaryTreeInOrder(root->_left);
	printf("%c ", root->data);
	BinaryTreeInOrder(root->_right);
}

// �������������
void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL");
		return;
	}

	BinaryTreePostOrder(root->_left);
	BinaryTreePostOrder(root->_right);
	printf("%d ", root->data);
}

// �������
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%d ", front->data);

		if (front->_left)
			QueuePush(&q, front->_left);

		if (front->_right)
			QueuePush(&q, front->_right);
	}
	printf("\n");

	QueueDestroy(&q);
}

// �ж϶������Ƿ�����ȫ������
int BinaryTreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);
	}

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);

		if (front == NULL)
		{
			break;
		}

		QueuePush(&q, front->_left);
		QueuePush(&q, front->_right);
	}

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front != NULL)
		{
			QueueDestroy(&q);
			return false;
		}
	}
	QueueDestroy(&q);
	return true;
}


// ����������
void BinaryTreeDestory(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	BinaryTreeDestory(root->_left);
	BinaryTreeDestory(root->_right);
	free(root);
}

int main()
{
	char str[100] = "ABD##E#H##CF##G##";
	scanf("%s", str);
	int i = 0;
	BTNode* root = BinaryTreeCreate(str, &i);
	BinaryTreeInOrder(root);
	printf("\n");

	//�ڵ����
	printf("BinaryTreeSize: %d\n", BinaryTreeSize(root));
	//Ҷ�ڵ����
	printf("BinaryTreeLeafSize: %d\n", BinaryTreeLeafSize(root));
	//��K��Ľڵ���
	printf("BinaryTreeLevelKSize: %d\n", BinaryTreeLevelKSize(root, 3));
	// ����������ֵΪx�Ľڵ�
	printf("BinaryTreeFind: %p\n", BinaryTreeFind(root, 'F'));
	//ǰ�����
	BinaryTreePrevOrder(root);
	printf("\n");
	//�������
	BinaryTreeInOrder(root);
	printf("\n");
	//�������
	BinaryTreePostOrder(root);
	printf("\n");
	BinaryTreeLevelOrder(root);
	printf("\n");
	// �ж϶������Ƿ�����ȫ������
	printf("BinaryTreeComplete: %d\n", BinaryTreeComplete(root));

	//���ٶ�����
	BinaryTreeDestory(root);

	return 0;
}