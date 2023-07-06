#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next; // next node address
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

ListNode *deleteDuplicates(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->val == temp->next->val)
        {
            ListNode *deleteNode = temp->next;
            temp->next = deleteNode->next;
            delete deleteNode;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}

int main()
{

    return 0;
}