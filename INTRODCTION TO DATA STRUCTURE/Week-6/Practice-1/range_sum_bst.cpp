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
class Solution
{
public:
    int rangeSumBST(TreeNode *root, int low, int high)
    {

        int sum = 0;

        if (!root)
            return 0;

        queue<TreeNode *> q;

        q.push(root);

        while (!q.empty())
        {

            TreeNode *p = q.front();
            q.pop();

            if (p->val >= low && p->val <= high)
                sum += p->val;

            if (p->left)
                q.push(p->left);
            if (p->right)
                q.push(p->right);
        }

        return sum;
    }
};