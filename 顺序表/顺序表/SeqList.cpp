#define  _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListPushBack(SL* ps, SLDataType x)
{
	if (ps->size == ps->capacity)//如果没有空间or空间不足就扩容
	{
		int newcapacity = (ps->capacity == 0 ? 4 : ps->capacity * 2);
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("扩容失败");
			exit(-1);
		}

	}
	else
	{
		ps->a[ps->size] = x;
		ps->size++;

	}



}