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

bool search(Node *root, int searchVal)
{
    cout << root->val << " " << searchVal << endl;
    if (root == NULL)
        return false;
    else if (root->val == searchVal)
        return true;
    else if (root->val < searchVal)
        return search(root->right, searchVal);
    else
        return search(root->left, searchVal);
}

int main()
{
    Node *root = input_tree();
    bool isFound = search(root, 3);
    if (isFound)
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}