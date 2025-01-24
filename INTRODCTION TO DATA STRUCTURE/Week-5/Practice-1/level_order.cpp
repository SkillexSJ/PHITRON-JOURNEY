#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T val;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> result;

    if (root == NULL)
    {
        return result;
    }

    queue<BinaryTreeNode<int> *> q;

    q.push(root);

    while (!q.empty())
    {

        BinaryTreeNode<int> *f = q.front();
        q.pop();

        result.push_back(f->val);

        if (f->left != NULL)
        {

            q.push(f->left);
        }

        if (f->right != NULL)
        {

            q.push(f->right);
        }
    }

    return result;
}