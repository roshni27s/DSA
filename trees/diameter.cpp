//time:O(n2) space:O(h)

int height(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}
int dia(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    int d1 = lh+rh+1;
    int d2 = dia(root->left);
    int d3 = dia(root->right);
    return max(d1,max(d2,d3));
}