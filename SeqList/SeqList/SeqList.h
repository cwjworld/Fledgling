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

// �����ݵĹ���:��ɾ��� 
void SLInit(SL* psl);
void SLDestroy(SL* psl);

void SLPrint(SL* psl);
void SLPushBack(SL* psl, SLDateType x);
void SLPushFront(SL* psl, SLDateType x);
void SLPopFront(SL* psl);
void SLPopBack(SL* psl);

// ˳������
int SLFind(SL* psl, SLDateType x);
// ˳�����posλ�ò���x
void SLInsert(SL* psl, size_t pos, SLDateType x);
// ˳���ɾ��posλ�õ�ֵ
void SLErase(SL* psl, size_t pos);