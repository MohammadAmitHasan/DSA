#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void FindMaxMin()
{
    int val;
    cin >> val;
    int max = INT_MIN, min = INT_MAX;

    Node *root;
    if (val == -1)
        root = NULL;
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l == -1 && r == -1)
        {
            if (p->val > max)
                max = p->val;
            if (p->val < min)
                min = p->val;
        }

        Node *left;
        Node *right;

        if (l == -1)
            left = NULL;
        else
        {
            left = new Node(l);
        }
        if (r == -1)
            right = NULL;
        else
        {
            right = new Node(r);
        }

        p->left = left;
        p->right = right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    cout << max << " " << min;
}

int main()
{
    FindMaxMin();
    return 0;
}