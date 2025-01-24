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
    int max_h(TreeNode *root)
    {

        if (!root)
            return 0;

        if (root->left == NULL && root->right == NULL)
        {
            return 1;
        }

        int l = max_h(root->left);
        int r = max_h(root->right);

        return max(l, r) + 1;
    }

    int deepestLeavesSum(TreeNode *root)
    {
        int mx = max_h(root);
        int sum = 0;

        queue<pair<TreeNode *, int>> q;

        q.push({root, 1});

        while (!q.empty())
        {

            pair<TreeNode *, int> p = q.front();
            q.pop();
            TreeNode *node = p.first;
            int level = p.second;
            if (level == mx)
            {
                sum += node->val;
            }

            if (node->left)
                q.push({node->left, level + 1});

            if (node->right)
                q.push({node->right, level + 1});
        }

        return sum;
    }
};