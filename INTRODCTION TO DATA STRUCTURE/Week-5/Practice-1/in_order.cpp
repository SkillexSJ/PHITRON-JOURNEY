/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {

        vector<int> res;
        dfs(root, res);
        return res;
    }
    void dfs(TreeNode *node, vector<int> &res)
    {

        if (!node)
            return;

        dfs(node->left, res);
        res.push_back(node->val);
        dfs(node->right, res);
    }
};