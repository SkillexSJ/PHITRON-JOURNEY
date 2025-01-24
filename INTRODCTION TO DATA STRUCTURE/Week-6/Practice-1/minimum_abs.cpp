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
    int mini = INT_MAX;

    int prev = -1; // eita ektu dekhte hoise

    void get_min(TreeNode *root) // Inorder traversal
    {
        if (!root)
            return;
        get_min(root->left);

        if (prev != -1)
        {

            mini = min(mini, abs(root->val - prev)); // mul kaj eitai
        }

        prev = root->val;

        get_min(root->right);
    }
    int getMinimumDifference(TreeNode *root)
    {
        get_min(root);
        return mini;
    }
};