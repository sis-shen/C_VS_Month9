#define  _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void Test1()
{
	SL s;
	SeqListInit(&s);
	SeqListPushFront(&s,1);
	SeqListPushFront(&s, 2);
	SeqListPushFront(&s, 3);
	SeqListPushFront(&s, 4);
	SeqListPushFront(&s, 5);
	SeqListPushFront(&s, 6);

	SeqListPopFront(&s);

	SeqListPrintInt(&s);


}


int main()
{
	Test1();
	return 0;
}