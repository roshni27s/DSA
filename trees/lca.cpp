//time:O(n) space:O(h)

Node *lca(Node *root,int n1,int n2)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(n1==root->data || n2==root->data)
    {
        return root;
    }
    Node *lca1 = lca(root->left,n1,n2);
    Node *lca2 = lca(root->right,n1,n2);
    if(lca1!=NULL && lca2!=NULL)
    {
        return root;
    }
    if(lca1!=NULL)
    {
        return lca1;
    }
    else{
        return lca2;
    }
}