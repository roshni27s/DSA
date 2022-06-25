//time:O(n) space:O(h)

void kd(Node *root,int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->data<<" ";
    }
    else
    {
        kd(root->left,k-1);
        kd(root->right.k-1);
    }
}