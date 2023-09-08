#pragma once
typedef int SLDataType;

#include <stdio.h>
#include <malloc.h>
#include <assert.h>

typedef struct SListNode {
	SLDataType data;
	struct SListNode* next;
}SListNode;

void SListPrintInt(SListNode* phead);//��ӡ������
int SListCount(SListNode* phead);//ͳ�ƽڵ����
void SListPushFront( SListNode** phead, SLDataType x);//ͷ��
void SListPushBack(SListNode** phead, SLDataType x);//β��
void SListPopFront(SListNode** pphead);//ͷɾ
void SListPopBack(SListNode** pphead);//βɾ
SListNode* SListFind(SListNode* phead, SLDataType x);//��ֵ����
void SListInsertBack(SListNode** pphead,SLDataType x, int pos);//���±�������
void SListEraseBack(SListNode** PPhead, int pos);//���±�ɾ��


