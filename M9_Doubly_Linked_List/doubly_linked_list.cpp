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

void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void print_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;

    head->next = a;
    a->next = b;
    a->prev = head;
    b->prev = a;

    print_forward(head);
    cout << endl;
    print_backward(tail);

    return 0;
}