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
		//扩容成功
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

void SeqListDestroy(SL* ps)
{
	free(ps->arr);
	ps->arr = NULL;
	ps->capacity = 0;
	ps->size = 0;
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

void SeqListPrintInt(SL* ps) //打印字符型的内容
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d\n", ps->arr[i]);
	}
}

void SeqListPopBack(SL* ps) //尾删
{
	if (ps->size == 0)
	{
		return;
	}
	ps->size--;
}

void SeqListPopFront(SL* ps) //头删
{
	if (ps->size == 0)
	{
		return;
	}
	for (int i = 1; i < ps->size; i++)
	{
		ps->arr[i - 1] = ps->arr[i];
	}
	ps->size--;
}

int SeqListFind(SL* ps, SLDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
		{
			return i;
		}
	}

	return -1;
}

void SeqListInsert(SL* ps, SLDataType x, int pos)
{
	if (pos<0 || pos >ps->size)
	{
		printf("非法下标\n");
		assert(0);
	}
	CheckCapacity(ps);

	for (int i =ps->size-1; i >= pos; i--)//将原本下标>=pos的元素右移一个长度
	{
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[pos] = x; //插入x
	ps->size++;
}

void SeqListErase(SL* ps, int pos) //删除下标为pos的元素
{
	if (pos<0 || pos >ps->size - 1)
	{
		printf("非法下标\n");
		assert(0);
	}
	CheckCapacity(ps);
	for (int i = pos; i < (ps->size - 1); i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}