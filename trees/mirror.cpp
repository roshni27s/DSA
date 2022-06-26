void mirror(Node *root)
{
    if(root)
    {
        mirror(root->left);
        mirror(root->right);
        swap(root->left,root->right);
    }
}