
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

Node *binary_input()
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
        Node *temp = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *Myl, *Myr;
        if (l == -1)
        {
            Myl = NULL;
        }
        else
        {
            Myl = new Node(l);
        }

        if (r == -1)
        {
            Myr = NULL;
        }
        else
        {
            Myr = new Node(r);
        }

        temp->left = Myl;
        temp->right = Myr;

        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return root;
}

bool search(Node *root, int val)
{

    if (!root)
    {
        return false;
    }

    if (root->val == val)
    {
        return true;
    }

    if (root->val > val)
    {
        return search(root->left, val); // target choto hole bame jabo
    }

    else
    {
        return search(root->right, val); // target boro hole dane jabo
    }
}

int main()
{
    Node *root = binary_input();

    bool BST = search(root, 15);

    if (BST)
    {
        cout << "YES";
    }

    else
        cout << "NO";

    return 0;
}
