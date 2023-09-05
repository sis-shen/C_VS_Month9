#pragma once
#define N 100
typedef int SLDataType;

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

////静态顺序表
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size;//表示存了多少数据
//}SL;
////接口函数 --命名风格跟着STL走
//void SeqListInit(SL* ps, SLDataType x);
//void SeqListPushBack(SL* ps, SLDataType x);
//void SeqListPopBack(SL* ps);
//void SeqListPushFront(SL* ps, SLDataType x);
//void SeqListPopFront(SL* ps);

//动态顺序表
typedef struct SeqList
{
	SLDataType* a;
	int size;//表示存了多少数据
	int capacity;//表示实时容量
}SL;
//接口函数 --命名风格跟着STL走
void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
