/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int maxi; // eita nilam jate function e poriborton na hoy

int get_d(TreeNode<int> *root)
{

    if (!root)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;

    int l = get_d(root->left);
    int r = get_d(root->right);

    int d = l + r;       // prootek node er left right er jonno ber korlam
    maxi = max(d, maxi); // prottekbar max height ke nibe jeikhan thekei houk

    return max(l, r) + 1;
}

int diameterOfBinaryTree(TreeNode<int> *root)
{

    maxi = 0;

    int h = get_d(root);

    return maxi;
}
