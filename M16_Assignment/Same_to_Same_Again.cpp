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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    int front()
    {
        return head->val;
    }
};

class myStack
{
    Node *head = NULL;
    int sz = 0;

public:
    int size()
    {
        return sz;
    }

    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    int top()
    {
        return head->val;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    myQueue q;
    myStack s;

    bool isSame = true;

    int val;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        q.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> val;
        s.push(val);
    }

    if (q.size() == s.size())
    {
        while (!q.empty())
        {
            if (q.front() != s.top())
            {
                isSame = false;
                break;
            }
            else
            {
                s.pop();
                q.pop();
            }
        }
    }
    else
    {
        isSame = false;
    }

    if (isSame)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}