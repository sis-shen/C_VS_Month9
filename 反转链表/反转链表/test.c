#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

  struct ListNode {
      int val;
      struct ListNode *next;
  };
 


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