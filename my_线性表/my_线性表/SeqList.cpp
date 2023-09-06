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
		//���ݳɹ�
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

void SeqListDestroy(SL* ps)
{
	free(ps->arr);
	ps->arr = NULL;
	ps->capacity = 0;
	ps->size = 0;
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

void SeqListPrintInt(SL* ps) //��ӡ�ַ��͵�����
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d\n", ps->arr[i]);
	}
}

void SeqListPopBack(SL* ps) //βɾ
{
	if (ps->size == 0)
	{
		return;
	}
	ps->size--;
}

void SeqListPopFront(SL* ps) //ͷɾ
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
		printf("�Ƿ��±�\n");
		assert(0);
	}
	CheckCapacity(ps);

	for (int i =ps->size-1; i >= pos; i--)//��ԭ���±�>=pos��Ԫ������һ������
	{
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[pos] = x; //����x
	ps->size++;
}

void SeqListErase(SL* ps, int pos) //ɾ���±�Ϊpos��Ԫ��
{
	if (pos<0 || pos >ps->size - 1)
	{
		printf("�Ƿ��±�\n");
		assert(0);
	}
	CheckCapacity(ps);
	for (int i = pos; i < (ps->size - 1); i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}