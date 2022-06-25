//time:O(n) space:O(h)

void postorder(Node *root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}