#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next; // next node address
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void reverse_list(Node *&head, Node *cur)
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

int main()
{

    return 0;
}