// https://leetcode.com/problems/leaf-similar-trees/submissions/993174831/

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

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
void getLeafNodesValue(TreeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
        cout << root->val << endl;
    }
    getLeafNodesValue(root->left, v);
    getLeafNodesValue(root->right, v);
}

class Solution
{
public:
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> v1;
        vector<int> v2;
        getLeafNodesValue(root1, v1);
        getLeafNodesValue(root2, v2);
        if (v1 == v2)
            return true;
        return false;
    }
};

int main()
{

    return 0;
}