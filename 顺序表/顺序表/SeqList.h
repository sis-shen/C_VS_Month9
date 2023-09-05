#pragma once
#define N 100
typedef int SLDataType;

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

////��̬˳���
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;//��ʾ���˶�������
//}SL;
////�ӿں��� --����������STL��
//void SeqListInit(SL* ps, SLDataType x);
//void SeqListPushBack(SL* ps, SLDataType x);
//void SeqListPopBack(SL* ps);
//void SeqListPushFront(SL* ps, SLDataType x);
//void SeqListPopFront(SL* ps);

//��̬˳���
typedef struct SeqList
{
	SLDataType* a;
	int size;//��ʾ���˶�������
	int capacity;//��ʾʵʱ����
}SL;
//�ӿں��� --����������STL��
void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
