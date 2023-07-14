#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution
{
    void getLeafNodesValue(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
        {
            v.push_back(-1);
            return;
        }
        v.push_back(root->val);
        getLeafNodesValue(root->left, v);
        getLeafNodesValue(root->right, v);
    }

public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        vector<int> v1;
        vector<int> v2;
        getLeafNodesValue(p, v1);
        getLeafNodesValue(q, v2);
        if (v1 == v2)
            return true;
        return false;
    }
};

int main()
{

    return 0;
}