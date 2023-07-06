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

void insert_in_tail(Node *&head, Node *&tail, int val)
{
    Node *newListNode = new Node(val);
    if (head == NULL)
    {
        head = newListNode;
        tail = newListNode;
        return;
    }
    tail->next = newListNode;
    tail = newListNode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void make_sorted(Node *head)
{

    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

void remove_duplicate(Node *head)
{
    Node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->val == temp->next->val)
        {
            Node *deleteNode = temp->next;
            temp->next = deleteNode->next;
            delete deleteNode;
        }
        else
        {
            temp = temp->next;
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_in_tail(head, tail, val);
    }
    make_sorted(head);
    remove_duplicate(head);
    print_linked_list(head);
    return 0;
}