

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

int count_node(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    int l = count_node(root->left);
    int r = count_node(root->right);

    return l + r + 1; // dam bam sathe nijekeo count korbe
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

    count_node(root);

    return 0;
}
