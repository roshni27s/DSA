//time:O(n^2) space:O(h)

int height(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}
bool isBal(Node *root)
{
    if(root==NULL)
    {
        return true;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return (abs(lh-rh)<=1 && isBal(root->left) && isBal(root->right));
}