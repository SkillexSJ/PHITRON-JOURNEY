/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{

    queue<BinaryTreeNode<int> *> q; // queue er madhye node store kora hobe
    q.push(root);                   // root node push kora hobe

    while (!q.empty())
    {
        // age select korbo
        BinaryTreeNode<int> *f = q.front();
        q.pop();

        // tarpor oita niya kaj korbo
        if (f->data == x)
            return true; // node er value print kora hobe

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

    return false;
}