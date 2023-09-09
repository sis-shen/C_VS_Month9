#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>

 struct ListNode {
      int val;
      struct ListNode *next;
  };
 


struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* prev = NULL;
    if (head == NULL)
    {
        return head;
    }
    while (head->val == val)
    {
        if (head->next != NULL)
        {
            struct ListNode* tmp = head;
            head = head->next;
            free(tmp);
        }
        else
        {
            free(head);
            head = NULL;
            return head;
        }
    }
    struct ListNode* cur = head;
    while (cur != NULL)
    {
        if (cur->val == val)
        {
            //删除
            prev->next = cur->next;
            free(cur);
            cur = prev->next;

        }
        else
        {
            //迭代往后走
            prev = cur;
            cur = cur->next;

        }
    }
    return head;
}


int main()
{
    //手动创建一个链表
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
    n1->val = 7;
    n2->val = 7;
    n3->val = 7;
    n4->val = 7;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    struct ListNode* head = removeElements(n1, 7);
    printf("%p", head);

}