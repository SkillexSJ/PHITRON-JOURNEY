
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

void left_side(Node *root)
{
    if (root == NULL)
        return;
    if (root->left)
    {
        left_side(root->left);
    }
    else if (root->right)
    {
        left_side(root->right);
    }

    cout << root->val << " ";
}

void right_side(Node *root, stack<int> &s)
{

    if (!root)
    {
        return;
    }
    if (root->right)
    {
        right_side(root->right, s);
    }
    else if (root->left)
    {
        right_side(root->left, s);
    }

    s.push(root->val);
}

int main()
{
    Node *root = Binary_input();
    if (root->left)
    {

        left_side(root->left);
    }

    cout << root->val << " ";

    stack<int> s;
    if (root->right)
    {

        right_side(root->right, s);
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
