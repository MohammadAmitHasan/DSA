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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

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

void reverse(Node *&head, Node *n)
{
    if (n->next == NULL)
    {
        head = n;
        return;
    }
    reverse(head, n->next);
    n->next->next = n;
    n->next = NULL;
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

    Node *head2 = NULL;
    Node *tail2 = NULL;

    Node *temp = head;
    while (temp != NULL)
    {
        insert_in_tail(head2, tail2, temp->val);
        temp = temp->next;
    }
    reverse(head2, head2);

    temp = head;
    Node *temp2 = head2;
    bool flag = true;

    while (temp != NULL)
    {

        if (temp->val != temp2->val)
        {
            flag = false;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }

    if (flag == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}