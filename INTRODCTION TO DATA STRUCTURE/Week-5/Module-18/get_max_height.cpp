
#include <bits/stdc++.h>
using namespace std;

/// The height of a binary tree is the length of the longest path from the root node to any leaf node, or the maximum depth of any leaf node

// The depth of a node is the number of edges from that node to the root node.

class Node // eita tree er jonno lagbei
{

public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {

        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int get_max_height(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 0; // leaf er height 0 hoy
    }

    int l = get_max_height(root->left);
    int r = get_max_height(root->right);

    return max(l, r) + 1; // dam bam er max er  sathe count korbe nijeke
}

int main()
{
    Node *root = new Node(10); // eivabe manual node nilam
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    // eikhane conncetion er kaj korlam
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    int co = get_max_height(root);

    cout << co;

       return 0;
}
