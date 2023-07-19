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
Node *convert(int arr[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (r + l) / 2;
    Node *root = new Node(arr[mid]);
    Node *leftNode = convert(arr, n, l, mid - 1);
    Node *rightNode = convert(arr, n, mid + 1, r);
    root->left = leftNode;
    root->right = rightNode;
    return root;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Node *root = convert(arr, n, 0, n - 1);
    level_order(root);
    return 0;
}