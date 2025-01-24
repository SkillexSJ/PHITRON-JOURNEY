
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

void level_order(Node *root)
{
    if (root == NULL)
        return;
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
void insert(Node *&root, int val)
{

    if (root == NULL)
    {
        root = new Node(val);
        return;
    }

    if (root->val > val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(val);
        }

        else
            insert(root->left, val);
    }

    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(val);
        }

        else
            insert(root->right, val);
    }
}
int main()
{
    Node *root = binary_input();

    insert(root, 15);

    level_order(root);

    return 0;
}
