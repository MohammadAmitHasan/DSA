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

void deleteNode(Node *node)
{
    node->val = node->next->val;
    Node *deleteNode = node->next;
    node->next = deleteNode->next;
    delete deleteNode;
}

int main()
{

    return 0;
}