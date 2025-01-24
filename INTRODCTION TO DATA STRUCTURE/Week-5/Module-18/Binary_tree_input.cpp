
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

Node *Binary_input()
{

    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL; // root kono node nai
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root); // rooot thakle push hhobe

    while (!q.empty())
    {
        Node *p = q.front(); // parent node track rakhlam
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *MyLeft, *MyRight; // eita childern er jonno
        if (l == -1)
            MyLeft = NULL; // child kono node nai
        else
            MyLeft = new Node(l);

        if (r == -1)
            MyRight = NULL; // child kono node nai
        else
            MyRight = new Node(r);

        p->left = MyLeft;
        p->right = MyRight; // child gulake parent er sathe connect

        if (p->left)
            q.push(p->left); // child thakle push
        if (p->right)
            q.push(p->right); // child thakle push
    }

    return root;
}

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

    Node *root = Binary_input();
    level_order(root);
    return 0;
}
