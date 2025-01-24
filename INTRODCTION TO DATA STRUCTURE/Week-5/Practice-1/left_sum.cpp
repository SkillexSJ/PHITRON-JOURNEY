#include <bits/stdc++.h>
using namespace std;

Tree Node class.class BinaryTreeNode
{
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void helper(BinaryTreeNode<int> *root, long long &sum, bool isLeft)
{

    if (!root)
        return;

    if (isLeft)
        sum += root->data; // jodi hoiya jay taile mone koro direct jog

    helper(root->left, sum, true); // eije left hoile true
    helper(root->right, sum, false);
}

long long leftSum(BinaryTreeNode<int> *root)
{
    long long sum = 0;
    helper(root, sum, false); /// eita ke bolbo je left hoile true dibi

    return sum;
}