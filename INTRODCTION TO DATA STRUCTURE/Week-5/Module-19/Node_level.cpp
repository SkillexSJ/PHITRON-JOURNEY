#include <bits/stdc++.h>

template <typename T>
class TreeNode
{
public:
    T val;
    bool isOriginal;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int nodeLevel(TreeNode<int> *root, int searchedValue)
{

    if (!root)
        return 0;

    queue<pair<TreeNode<int> *, int>> q;

    if (root)
        q.push({root, 1}); // {} is a pair, not a set eivabe value dhhukate hoy

    while (!q.empty())
    {

        pair<TreeNode<int> *, int> parent = q.front();
        q.pop();

        TreeNode<int> *node = parent.first;
        int level = parent.second;

        if (node->val == searchedValue)
            return level;

        if (node->left)
            q.push({node->left, level + 1});

        if (node->right)
            q.push({node->right, level + 1});
    }
}
