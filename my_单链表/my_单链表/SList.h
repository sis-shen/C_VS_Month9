#pragma once
typedef int SLDataType;

#include <stdio.h>
#include <malloc.h>
#include <assert.h>

typedef struct SListNode {
	SLDataType data;
	struct SListNode* next;
}SListNode;

void SListPrintInt(SListNode* phead);//打印单链表
int SListCount(SListNode* phead);//统计节点个数
void SListPushFront( SListNode** phead, SLDataType x);//头插
void SListPushBack(SListNode** phead, SLDataType x);//尾插
void SListPopFront(SListNode** pphead);//头删
void SListPopBack(SListNode** pphead);//尾删
SListNode* SListFind(SListNode* phead, SLDataType x);//按值查找
void SListInsertBack(SListNode** pphead,SLDataType x, int pos);//按下标向后插入
void SListEraseBack(SListNode** PPhead, int pos);//按下标删除


