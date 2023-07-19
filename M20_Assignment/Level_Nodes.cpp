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

Node *getInput()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
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
            left = new Node(l);

        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        p->left = left;
        p->right = right;

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

void printNodeLevel(Node *root, int level)
{
    vector<int> v;

    if (root == NULL)
        return;
    queue<pair<Node *, int>> q;

    q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        q.pop();

        Node *node = pr.first;
        int lvl = pr.second;

        if (level == lvl)
        {
            cout << node->val << " ";
            v.push_back(node->val);
        }

        if (node->left)
            q.push({node->left, lvl + 1});

        if (node->right)
            q.push({node->right, lvl + 1});
    }

    if (v.size() == 0)
    {
        cout << "Invalid";
    }
}

int main()
{
    Node *root = getInput();
    int level;
    cin >> level;
    printNodeLevel(root, level);

    return 0;
}