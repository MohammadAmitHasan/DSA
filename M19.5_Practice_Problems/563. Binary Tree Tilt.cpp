// https://leetcode.com/problems/binary-tree-tilt/

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
    int totalTilt = 0;
    int findMax(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int l = findMax(root->left);
        int r = findMax(root->right);
        int tilt = abs(l - r);
        totalTilt += tilt;
        return l + r + root->val;
    }

public:
    int findTilt(TreeNode *root)
    {
        findMax(root);
        return totalTilt;
    }
};

int main()
{

    return 0;
}