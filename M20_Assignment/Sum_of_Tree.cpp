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

int SumOfTree()
{
    int sum = 0;
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
    {
        root = new Node(val);
        sum += val;
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

        Node *left;
        Node *right;

        if (l == -1)
            left = NULL;
        else
        {
            left = new Node(l);
            sum += l;
        }
        if (r == -1)
            right = NULL;
        else
        {
            right = new Node(r);
            sum += r;
        }

        p->left = left;
        p->right = right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return sum;
}

int main()
{
    int sum = SumOfTree();
    cout << sum;
    return 0;
}