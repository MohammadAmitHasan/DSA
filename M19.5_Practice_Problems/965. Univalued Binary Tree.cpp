// https://leetcode.com/problems/univalued-binary-tree/
#include <bits/stdc++.h>
using namespace std;

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
    int uVal;
    bool filled = false;

public:
    bool isUnivalTree(TreeNode *root)
    {
        if (!filled)
        {
            uVal = root->val;
            filled = true;
        }

        if (root == NULL)
            return true;
        if (root->val == uVal)
        {
            bool l = isUnivalTree(root->left);
            bool r = isUnivalTree(root->right);
            if (l && r)
                return true;
        }
        return false;
    }
};

int main()
{

    return 0;
}