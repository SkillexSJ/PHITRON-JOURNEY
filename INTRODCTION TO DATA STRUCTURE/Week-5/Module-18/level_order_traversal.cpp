

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

void level_order(Node *root)
{

    queue<Node *> q; // queue er madhye node store kora hobe
    q.push(root);    // root node push kora hobe

    while (!q.empty())
    {
        // age select korbo
        Node *f = q.front();
        q.pop();

        // tarpor oita niya kaj korbo
        cout << f->val << " "; // node er value print kora hobe

        // tarpor childern ke push korbo

        if (f->left != NULL)
        {
            q.push(f->left);
        }

        if (f->right != NULL) // NULL check kore nite val nahole error hobe
        {
            q.push(f->right);
        }
        }
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

    level_order(root);

    return 0;
}
