#define  _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//内部函数


//检查是否需要扩容
void CheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		ps->arr = (SLDataType*)realloc(ps->arr, ps->capacity == 0 ? InitCapacity : (sizeof(SLDataType) * (ps->capacity) * 2));
		if (ps->arr == NULL) //假如扩容失败
		{
			printf("realloc failed\n");
			exit(-1);
		}
		ps->capacity *= 2;
	}
}




//接口函数的实现

void SeqListInit(SL* ps)//初始化
{
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListPushBack(SL* ps, SLDataType x)//尾插
{
	CheckCapacity(ps);
	ps->arr[ps->size] = x;
	ps->size++;
}

void SeqListPushFront(SL* ps, SLDataType x)//尾插
{
	CheckCapacity(ps);
	for (int i = 0; i < ps->size; i++)
	{
		ps->arr[ps->size - i] = ps->arr[ps->size-i-1];
	}
	ps->arr[0] = x;
	ps->size++;
}

void SeqListPrintfInt(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf()
	}
}

