#define  _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//�ڲ�����


//����Ƿ���Ҫ����
void CheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		ps->arr = (SLDataType*)realloc(ps->arr, ps->capacity == 0 ? InitCapacity : (sizeof(SLDataType) * (ps->capacity) * 2));
		if (ps->arr == NULL) //��������ʧ��
		{
			printf("realloc failed\n");
			exit(-1);
		}
		ps->capacity *= 2;
	}
}




//�ӿں�����ʵ��

void SeqListInit(SL* ps)//��ʼ��
{
	ps->arr = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListPushBack(SL* ps, SLDataType x)//β��
{
	CheckCapacity(ps);
	ps->arr[ps->size] = x;
	ps->size++;
}

void SeqListPushFront(SL* ps, SLDataType x)//β��
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

