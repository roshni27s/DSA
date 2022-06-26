bool same(Node *a,Node *B)
{
    if(a==NULL && b==NULL)
    {
        return true;
    }
    else if(a==NULL || b==NULL)
    {
        return false;
    }
    return a->data==b->data && same(a->left,b->left) && same(a->right,b->right);
}
bool isSubTree(Node *T,Node *S)
{
    if(T==NULL && S==NULL)
    {
        return true;
    }
    else if(T==NULL)
    {
        return false;
    }
    return same(T,S) || isSubTree(T->left,S) || isSubTree(T->right,S);
}