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
class Solution
{
public:
    TreeNode *convert(vector<int> arr, int l, int r)
    {

        if (l > r)
            return NULL;

        int mid = l + (r - l) / 2;

        TreeNode *root = new TreeNode(arr[mid]);

        root->left = convert(arr, l, mid - 1);
        root->right = convert(arr, mid + 1, r);

        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {

        return convert(nums, 0, nums.size() - 1);
    }
};