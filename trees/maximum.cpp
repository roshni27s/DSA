//time:O(n) space:O(h)

int mb(Node *root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    return max(root->data,max(mb(root->left).mb(Root->right)));
}