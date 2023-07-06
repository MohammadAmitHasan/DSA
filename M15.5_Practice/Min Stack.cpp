#include <bits/stdc++.h>
// Implement class for minStack.

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

class minStack
{
    // Write your code here.

    Node *head = NULL;
    int sz = 0;
    int min;

public:
    // Constructor
    minStack()
    {
        // Write your code here.
    }

    // Function to add another element equal to num at the top of stack.
    void push(int num)
    {
        // Write your code here.
        sz++;
        // Write your code here
        Node *newNode = new Node(num);
        if (head == NULL)
        {
            // tail = newNode;
            head = newNode;
            min = num;
            return;
        }
        newNode->next = head;
        head = newNode;
        if (num < min)
        {
            min = num;
        }
    }

    // Function to remove the top element of the stack.
    int pop()
    {
        // Write your code here.
        if (sz == 0)
            return -1;
        sz--;
        Node *deleteNode = head;
        head = head->next;
        int top = deleteNode->data;
        delete deleteNode;
        return top;
    }

    // Function to return the top element of stack if it is present. Otherwise return -1.
    int top()
    {
        // Write your code here.
        if (sz == 0)
            return -1;
        else
            return head->data;
    }

    // Function to return minimum element of stack if it is present. Otherwise return -1.
    int getMin()
    {
        // Write your code here.
        if (sz > 0)
        {
            return min;
        }
        else
            return -1;
    }
};

int main()
{

    return 0;
}