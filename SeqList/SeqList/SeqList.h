#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDateType;
typedef struct SeqList
{
	SLDateType* a;
	size_t size;
	size_t capacity; // unsigned int
}SL;  

// 对数据的管理:增删查改 
void SLInit(SL* psl);
void SLDestroy(SL* psl);

void SLPrint(SL* psl);
void SLPushBack(SL* psl, SLDateType x);
void SLPushFront(SL* psl, SLDateType x);
void SLPopFront(SL* psl);
void SLPopBack(SL* psl);

// 顺序表查找
int SLFind(SL* psl, SLDateType x);
// 顺序表在pos位置插入x
void SLInsert(SL* psl, size_t pos, SLDateType x);
// 顺序表删除pos位置的值
void SLErase(SL* psl, size_t pos);