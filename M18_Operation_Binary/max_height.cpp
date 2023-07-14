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

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. Ber kore ano
        Node *p = q.front();
        q.pop();

        // 2. Jabotiyo kaj
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

        // 3. children gula ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
{
    if (root == NULL)
        cout << "Empty Tree";
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. Ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. Jabotiyo kaj kora
        cout << f->val << " ";

        // 3. Children gula ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        int l = maxHeight(root->left);
        int r = maxHeight(root->right);
        return max(l, r) + 1;
    }
}

int main()
{
    Node *root = input_tree();
    level_order(root);
    cout << endl
         << maxHeight(root);
    return 0;
}