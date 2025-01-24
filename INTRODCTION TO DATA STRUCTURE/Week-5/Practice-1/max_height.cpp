#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int heightOfBinaryTree(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;

    int l = heightOfBinaryTree(root->left);
    int r = heightOfBinaryTree(root->right);

    return max(l, r) + 1;
}
