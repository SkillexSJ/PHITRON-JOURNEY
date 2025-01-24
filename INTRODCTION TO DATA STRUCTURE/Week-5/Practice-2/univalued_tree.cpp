/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

bool check(TreeNode* root){

    if(!root) return true;

    queue<TreeNode*>q;

    q.push(root);

    while(!q.empty()){

        TreeNode* p = q.front();
        q.pop();

        if(p->val != root->val) return false;

        if(p->left) q.push(p->left);

        if(p->right) q.push(p->right);
    }

    return true;
}

    bool isUnivalTree(TreeNode* root) {
        
         

        return check(root);;
    }
};