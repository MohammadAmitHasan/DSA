#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next; // next ListNode address
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_val(ListNode *&head, ListNode *&tail, int val)
{
    ListNode *newListNode = new ListNode(val);
    if (head == NULL)
    {
        head = newListNode;
        tail = newListNode;
        return;
    }
    tail->next = newListNode;
    tail = newListNode;
}

void reverse_list(ListNode *&head, ListNode *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    };
    reverse_list(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

bool isPalindrome(ListNode *head)
{
    ListNode *newHead = NULL;
    ListNode *newTail = NULL;
    ListNode *temp = head;
    while (temp != NULL)
    {
        insert_val(newHead, newTail, temp->val);
        temp = temp->next;
    }
    reverse_list(newHead, newHead);

    temp = head;
    ListNode *temp2 = newHead;
    while (temp != NULL)
    {
        if (temp->val != temp2->val)
        {
            return false;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    return true;
}

int main()
{

    return 0;
}