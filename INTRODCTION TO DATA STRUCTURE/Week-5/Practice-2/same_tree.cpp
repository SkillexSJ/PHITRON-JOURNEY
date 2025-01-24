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
    void pre(TreeNode *root, vector<int> &v)
    {

        if (root == NULL) // base case
        {
            v.push_back(-100);
            return;
        }
        v.push_back(root->val); // root
        pre(root->left, v);     // left
        pre(root->right, v);    // right
    }

    void post(TreeNode *root, vector<int> &v)
    {

        if (root == NULL) // base case
        {
            v.push_back(-100);
            return;
        }
        post(root->left, v);    // left
        post(root->right, v);   // right
        v.push_back(root->val); // root
    }

    bool isSameTree(TreeNode *p, TreeNode *q)
    {

        vector<int> v1, v2, v3, v4;

        if (p == NULL && q == NULL)
            return true;
        else if ((p == NULL && q != NULL) || (q == NULL && p != NULL))
            return false;

        pre(p, v1);
        pre(q, v2);

        post(p, v3);
        post(q, v4);

        return (v1 == v2) && (v3 == v4);
    }
};