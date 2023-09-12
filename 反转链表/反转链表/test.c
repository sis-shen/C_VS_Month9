#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <malloc.h>

  struct ListNode {
      int val;
      struct ListNode *next;
  };
 

//version 1
  //原地反转
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    struct ListNode* nextnode = NULL;
    if (head == NULL)
    {
        return NULL;
    }
    else if (cur->next == NULL)
    {
        return cur;
    }

    prev = cur;
    cur = cur->next;
    prev->next = NULL;
    while (cur->next != NULL)
    {
        nextnode = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nextnode;
    }
    cur->next = prev;
    return cur;

}

//version2 
//头插

struct ListNode* reverseList(struct ListNode* head) {


    struct ListNode* cur = head;
    struct ListNode* newHead = NULL;
    struct ListNode* next = NULL;
    while (cur != NULL)
    {
        next = cur->next;
        //头插
        cur->next = newHead;
        newHead = cur;
        //迭代往后走
        cur = next;
    }
    return newHead;
}

int main()
{
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* head = n1; n1->next = n2; n2->next = n3;
    n3->next = n4; n4->next = n5;
    n5->next = NULL;
    n1->val = 1;
    n2->val = 2;
    n3->val = 3;
    n4->val = 4;
    n5->val = 5;

    reverseList(head);
    return 0;




}