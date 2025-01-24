

#include <bits/stdc++.h>
using namespace std;

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

void preorder(Node *root)
{ //  root -> left -> right

    if (root == NULL) // base case
    {
        return;
    }
    preorder(root->left);     // left
    preorder(root->right);    // right
    cout << root->val << " "; // root
}

int main()
{
    Node *root = new Node(1); // eivabe manual node nilam
    Node *a = new Node(7);
    Node *b = new Node(9);
    Node *c = new Node(2);
    Node *d = new Node(6);
    Node *e = new Node(5);
    Node *f = new Node(11);
    Node *g = new Node(9);
    Node *h = new Node(5);

    // eikhane conncetion er kaj korlam
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    d->left = e;
    d->right = f;
    b->right = g;
    g->left = h;

    preorder(root);

    return 0;
}
