
#include <bits/stdc++.h>
using namespace std;

class Node
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

Node *Binary_input()
{

    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
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

        Node *MyLeft, *MyRight;
        if (l == -1)
            MyLeft = NULL;
        else
            MyLeft = new Node(l);

        if (r == -1)
            MyRight = NULL;
        else
            MyRight = new Node(r);

        p->left = MyLeft;
        p->right = MyRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

int get_sum(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }

    int l = get_sum(root->left);
    int r = get_sum(root->right);

    return root->val + l + r;
}

int main()
{
    Node *root = Binary_input();
    int sum = get_sum(root);

    cout << sum << endl;

    return 0;
}
