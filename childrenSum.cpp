//time:O(n) space:O(h)

bool children(Node *root)
{
    if(root==NULL || (root->left==NULL && root->right==NULL))
    {
        return NULL;
    }
    int sum=0;
    if(root->left)
    {
        sum+=root->left->data;
    }
    if(root->right)
    {
        sum+=root->right->data;
    }
    return (sum==root->data && children(root->left) && children(root->right));
}