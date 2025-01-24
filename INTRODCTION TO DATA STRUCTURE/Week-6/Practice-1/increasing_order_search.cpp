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
    void make_it(TreeNode *root, TreeNode *&prev, TreeNode *&newRoot)
    {

        if (!root)
            return;

        make_it(root->left, prev, newRoot);

        if (prev == NULL) // ei kajta notun
            newRoot = root;

        if (prev != NULL)       // ager ta track rakahar jonno
            prev->right = root; // ager tar sathe connect kore dibo

        root->left = NULL;

        prev = root;

        make_it(root->right, prev, newRoot);
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        TreeNode *prev = NULL;
        TreeNode *newRoot = NULL;
        make_it(root, prev, newRoot);

        return newRoot;
    }
};