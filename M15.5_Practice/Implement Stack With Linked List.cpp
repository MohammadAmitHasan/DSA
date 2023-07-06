
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
    // Write your code here
    Node *head = NULL;
    int sz = 0;

public:
    Stack()
    {
        // Write your code here
    }

    int getSize()
    {
        // Write your code here
        return sz;
    }

    bool isEmpty()
    {
        if (sz == 0)
            return true;
        else
            return false;
        // Write your code here
    }

    void push(int data)
    {
        // Write your code here
        sz++;
        // Write your code here
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            // tail = newNode;
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pop()
    {
        if (sz == 0)
            return;
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    int getTop()
    {
        // Write your code here
        if (sz == 0)
            return -1;
        else
            return head->data;
    }
};

int main()
{

    return 0;
}