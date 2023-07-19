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

void isPerfectTree()
{
    int maxLvl = 0, noOfNode = 0;
    int val;
    cin >> val;
    Node *root;

    root = new Node(val);

    queue<pair<Node *, int>> q;

    q.push({root, 1});
    maxLvl++;
    noOfNode++;

    while (!q.empty())
    {

        pair<Node *, int> pr = q.front();
        // Node *p = q.front();
        q.pop();

        Node *node = pr.first;
        int lvl = pr.second;

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

        node->left = left;
        node->right = right;

        if (node->left)
        {
            if (maxLvl < lvl + 1)
            {
                maxLvl = lvl + 1;
            }
            q.push({node->left, lvl + 1});
            noOfNode++;
        }

        if (node->right)
        {
            if (maxLvl < lvl + 1)
            {
                maxLvl = lvl + 1;
            }
            q.push({node->right, lvl + 1});
            noOfNode++;
        }
    }
    if (pow(2, maxLvl) - 1 == noOfNode || (maxLvl == 1 && noOfNode == 1))
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    isPerfectTree();
    return 0;
}