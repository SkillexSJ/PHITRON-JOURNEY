
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

Node *input()
{
    int val;
    cin >> val;
    Node *root;

    if (val == -1)
    {
        root = NULL;
    }
    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *Myleft, *MyRight;

        if (l == -1)
        {
            Myleft = NULL;
        }
        else
        {
            Myleft = new Node(l);
        }

        if (r == -1)
        {
            MyRight = NULL;
        }

        else
        {
            MyRight = new Node(r);
        }

        p->left = Myleft;
        p->right = MyRight;

        if (p->left)
            q.push(p->left); // child thakle push
        if (p->right)
            q.push(p->right); // child thakle push
    }

    return root;
}

void print(Node *root)
{
    cout << root->val << " ";

    if (root->right)
    {
        print(root->right);
    }

    else if (root->left)
    {
        print(root->left);
    }
}
int main()
{

    Node *root = input();

    print(root);

    return 0;
}
