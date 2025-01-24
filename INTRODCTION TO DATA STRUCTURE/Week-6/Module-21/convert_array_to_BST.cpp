
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

Node *convert(vector<int> arr, int n, int l, int r)
{
    if (l > r)
        return NULL; // l boro hoye gele amra ar node banabo na// base case

    int mid = l + (r - l) / 2; // BS er moto mid nibo

    Node *root = new Node(arr[mid]); // protibar mid value ta root hobe

    Node *left = convert(arr, n, l, mid - 1);  // l ta tar jaygay e thakbe khali r change hobe
    Node *right = convert(arr, n, mid + 1, r); // ekhon r tar jaygay thakbe ar l change hobe

    root->left = left;
    root->right = right; // just connect kore dibo

    return root; // kaj seshe root return
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *root = convert(arr, n, 0, n - 1);
    level_order(root);

    return 0;
}
