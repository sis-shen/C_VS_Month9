#define  _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"
void Test()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListInsertBack(&plist, 5, 2);
	SListInsertBack(&plist, 7, 0);
	SListEraseBack(&plist, 0);
	SListPrintInt(plist);

}


int main()
{
	Test();
	return 0;
}