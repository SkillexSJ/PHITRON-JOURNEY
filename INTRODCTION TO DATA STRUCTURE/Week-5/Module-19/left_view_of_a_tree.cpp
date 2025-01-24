#include <bits/stdc++.h>

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> res;

    bool freq[30001] = {false}; // prottek level ke false dhore nibo

    queue<pair<TreeNode<int> *, int>> q;

    if (root)
        q.push({root, 1});

    while (!q.empty())
    {

        pair<TreeNode<int> *, int> parent = q.front();
        q.pop();

        TreeNode<int> *node = parent.first;
        int level = parent.second;

        if (freq[level] == false) // jodi oi level khali thake tahole oikhnaer value ta nibo
        {

            res.push_back(node->data); // nilam
            freq[level] = true;        // neyar por oi tala ar khali nai
        }

        if (node->left)
            q.push({node->left, level + 1});

        if (node->right)
            q.push({node->right, level + 1});
    }

    return res;
}