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

void SeqListInit(SL* ps);//��ʼ��˳���
void SeqListDestroy(SL* ps);//����˳���

void SeqListPushBack(SL* ps,SLDataType x); //β��
void SeqListPopBack(SL* ps); //βɾ
void SeqListPushFront(SL* ps, SLDataType x); //β��
void SeqListPopFront(SL* ps);//ͷɾ

void SeqListInsert(SL* ps, SLDataType x, int pos);//��x����pos
void SeqListErase(SL* ps, int pos);//ɾ���±�Ϊpos��Ԫ��

int SeqListFind(SL* ps, SLDataType x);//����Ԫ��x,�ҵ��˾ͷ����±꣬�Ҳ����ͷ���-1

void SeqListPrintInt(SL* ps);//��ӡ˳���������Ԫ��