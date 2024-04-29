#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    void dfs(TreeNode *node, vector<int> &arr)
    {
        if (node == nullptr)
            return;
        dfs(node->left, arr);
        dfs(node->right, arr);
        arr.push_back(node->val);
    };

    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> arr;
        this->dfs(root, arr);
        return arr;
    }
};
