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

void print_linked_list(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

// int size(ListNode *head)
// {
//     ListNode *temp = head;
//     int count = 0;
//     while (temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// Find middle
ListNode *middleListNode(ListNode *head)
{
    ListNode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    int middle_ListNode = count / 2;

    temp = head;

    for (int i = 0; i < middle_ListNode; i++)
    {
        temp = temp->next;
    }

    return temp;
}

// Find middle using slow fast method
ListNode *slowFast(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_val(head, tail, val);
    }

    ListNode *res = middleListNode(head);
    ListNode *res2 = slowFast(head);
    cout << res->val << " ";
    cout << res2->val;
    return 0;
}