#define  _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"


//========    �ڲ�����==========

SListNode* BuySListNode()
{
	SListNode* ret = (SListNode*)malloc(sizeof(SListNode));
	ret->next = NULL;
	return ret;
}

int SListCount_inner(SListNode* phead) //ͳ�ƽڵ�����
{
	SListNode* cur = phead;
	int count = 0;
	while (cur != NULL)
	{
		count++;
		cur = cur->next;
	}
	return count;
}

void IsLeagal(SListNode* phead, int pos)//�ж������Ƿ�Խ��
{
	int max = SListCount_inner(phead);
	if (pos < 0 || pos >= max)
	{
		printf("�Ƿ��±�\n");
		assert(0);
	}
}




//========    �ӿں���     ============
void SListPushFront(SListNode** pphead, SLDataType x) //ͷ��
{
	assert(pphead != NULL);
	if (*pphead == NULL)
	{
		*pphead = BuySListNode();
		(*pphead)->data = x;
	}
	else
	{
		SListNode* cur = *pphead;
		*pphead = BuySListNode();
		(*pphead)->data = x;
		(*pphead)->next = cur;
	}
}

void SListPrintInt(SListNode* phead)  //��ӡ
{
	assert(phead != NULL);
	do {
		printf("%d->", phead->data);
		phead = phead->next;

	} while (phead != NULL);
	printf("NULL\n");
}

void SListPushBack(SListNode** pphead, SLDataType x) //β��
{
	assert(pphead != NULL);
	if (*pphead == NULL)
	{
		SListPushFront(pphead, x);//���ú���
	}
	else
	{
		SListNode* cur = *pphead;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = BuySListNode();
		cur->next->data = x;
	}
}

void SListPopFront(SListNode** pphead)
{
	assert(pphead != NULL);
	assert(*pphead != NULL);//����βɾ������

	SListNode* cur = *pphead;
	if (cur->next == NULL)
	{
		free(cur);
		*pphead = NULL;
	}
	else
	{
		*pphead = cur->next;
		free(cur);
	}

}

void SListPopBack(SListNode** pphead)//βɾ
{
	assert(pphead != NULL);
	assert(*pphead != NULL);//����ͷɾ������
	SListNode* cur = *pphead;
	if (cur->next == NULL)
	{
		SListPopFront(pphead);//���ú���
	}
	else
	{
		while (cur->next->next != NULL)
		{
			cur = cur->next;
		}
		free(cur->next);
		cur->next = NULL;//���Ұָ��
	}
}

SListNode* SListFind(SListNode* phead, SLDataType x)
{
	assert(phead != NULL);//�������ڿ����������
	SListNode* cur = phead;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

int SListCount(SListNode* phead)
{
	return SListCount_inner(phead);
}

void SListInsertBack(SListNode** pphead,SLDataType x, int pos)
{
	assert(pphead != NULL);//���ɲ��������
	assert(*pphead);//
	IsLeagal(*pphead, pos);
	SListNode* cur = *pphead;

	
	for (int i = 0; i < pos; i++)
	{
		cur = cur->next;
	}
	if (cur->next == NULL)
	{
		cur->next = BuySListNode();
		cur->next->data = x;
	}
	else
	{
		SListNode* tmp = BuySListNode();
		tmp->next = cur->next;
		tmp->data = x;
		cur->next = tmp;
	}
	
}

void SListEraseBack(SListNode** pphead, int pos)
{
	assert(pphead != NULL);
	assert(*pphead != NULL);//���ɴ��������
	assert((*pphead)->next != NULL);//�������������ڵ�
	IsLeagal(*pphead, pos);
	if (pos == SListCount(*pphead) - 1-1)
	{
		SListPopBack(pphead);//�൱��βɾ
	}
	else
	{
		SListNode* cur = *pphead;
		for (int i = 0; i < pos; i++)
		{
			cur = cur->next;
		}
		SListNode* tmp = cur->next;
		cur->next = cur->next->next;
		free(tmp);
	}


}