#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "Queue.h"

// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
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

// 二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
	return root == NULL ? 0 :
		BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}

// 二叉树叶子节点个数
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

// 二叉树第k层节点个数
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

// 二叉树查找值为x的节点
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

// 二叉树前序遍历 
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

// 二叉树中序遍历
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

// 二叉树后序遍历
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

// 层序遍历
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

// 判断二叉树是否是完全二叉树
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


// 二叉树销毁
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

	//节点个数
	printf("BinaryTreeSize: %d\n", BinaryTreeSize(root));
	//叶节点个数
	printf("BinaryTreeLeafSize: %d\n", BinaryTreeLeafSize(root));
	//第K层的节点数
	printf("BinaryTreeLevelKSize: %d\n", BinaryTreeLevelKSize(root, 3));
	// 二叉树查找值为x的节点
	printf("BinaryTreeFind: %p\n", BinaryTreeFind(root, 'F'));
	//前序遍历
	BinaryTreePrevOrder(root);
	printf("\n");
	//中序遍历
	BinaryTreeInOrder(root);
	printf("\n");
	//后序遍历
	BinaryTreePostOrder(root);
	printf("\n");
	BinaryTreeLevelOrder(root);
	printf("\n");
	// 判断二叉树是否是完全二叉树
	printf("BinaryTreeComplete: %d\n", BinaryTreeComplete(root));

	//销毁二叉树
	BinaryTreeDestory(root);

	return 0;
}