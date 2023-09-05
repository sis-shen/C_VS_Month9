#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

#define InitCapacity 4

typedef int SLDataType;

typedef struct SeqList {
	SLDataType* arr = NULL;
	int size;
	int capacity;
}SL;

void SeqListInit(SL* ps);//初始化顺序表
void SeqListDestroy(SL* ps);//销毁顺序表

void SeqListPushBack(SL* ps,SLDataType x); //尾插
void SeqListPopBack(SL* ps); //尾删
void SeqListPushFront(SL* ps, SLDataType x); //尾插
void SeqListPopFront(SL* ps);//头删

void SeqListInsert(SL* ps, SLDataType x, int pos);//将x插入pos
void SeqListErase(SL* ps, int pos);//删除下标为pos的元素

int SeqListFind(SL* ps, SLDataType x);//查找元素x,找到了就返回下标，找不到就返回-1

void SeqListPrintInt(SL* ps);//打印顺序表内所有元素