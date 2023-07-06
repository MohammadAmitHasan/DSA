#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next; // next node address
    Node *prev; // previous node address
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

bool hasCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    bool cycle = false;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            cycle = true;
            break;
        }
    }
    return cycle;
}

int main()
{

    return 0;
}