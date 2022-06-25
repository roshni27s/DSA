//time:O(n) space:O(h)

int size(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+size(root->left)+size(root->right);
}