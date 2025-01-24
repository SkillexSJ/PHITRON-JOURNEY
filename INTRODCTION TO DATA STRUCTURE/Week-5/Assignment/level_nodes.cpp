
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

vector<int> level_node(Node *root, int x)
{
    vector<int> res;

    queue<pair<Node *, int>> q;

    if (root)
        q.push({root, 0}); // khali eitar jonno

    while (!q.empty())
    {

        pair<Node *, int> parent = q.front();
        q.pop();

        Node *node = parent.first;
        int level = parent.second;

        if (level == x)
        {

            res.push_back(node->val);
        }

        if (level > x)
            break;

        if (node->left)
            q.push({node->left, level + 1});

        if (node->right)
            q.push({node->right, level + 1});
    }

    return res;
}

int main()
{
    Node *root = Binary_input();
    int x;
    cin >> x;
    vector<int> res = level_node(root, x);

    if (res.empty())
    {
        cout << "Invalid" << endl;
    }
    else
    {

        for (int num : res)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
