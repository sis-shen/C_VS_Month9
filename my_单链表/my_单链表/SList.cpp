#define  _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"


//========    内部函数==========

SListNode* BuySListNode()
{
	SListNode* ret = (SListNode*)malloc(sizeof(SListNode));
	ret->next = NULL;
	return ret;
}

int SListCount_inner(SListNode* phead) //统计节点总数
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

void IsLeagal(SListNode* phead, int pos)//判断坐标是否越界
{
	int max = SListCount_inner(phead);
	if (pos < 0 || pos >= max)
	{
		printf("非法下标\n");
		assert(0);
	}
}




//========    接口函数     ============
void SListPushFront(SListNode** pphead, SLDataType x) //头插
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

void SListPrintInt(SListNode* phead)  //打印
{
	assert(phead != NULL);
	do {
		printf("%d->", phead->data);
		phead = phead->next;

	} while (phead != NULL);
	printf("NULL\n");
}

void SListPushBack(SListNode** pphead, SLDataType x) //尾插
{
	assert(pphead != NULL);
	if (*pphead == NULL)
	{
		SListPushFront(pphead, x);//复用函数
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
	assert(*pphead != NULL);//不可尾删空链表

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

void SListPopBack(SListNode** pphead)//尾删
{
	assert(pphead != NULL);
	assert(*pphead != NULL);//不可头删空链表
	SListNode* cur = *pphead;
	if (cur->next == NULL)
	{
		SListPopFront(pphead);//复用函数
	}
	else
	{
		while (cur->next->next != NULL)
		{
			cur = cur->next;
		}
		free(cur->next);
		cur->next = NULL;//清除野指针
	}
}

SListNode* SListFind(SListNode* phead, SLDataType x)
{
	assert(phead != NULL);//不可以在空链表里查找
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
	assert(pphead != NULL);//不可插入空链表
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
	assert(*pphead != NULL);//不可传入空链表
	assert((*pphead)->next != NULL);//链表至少两个节点
	IsLeagal(*pphead, pos);
	if (pos == SListCount(*pphead) - 1-1)
	{
		SListPopBack(pphead);//相当于尾删
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