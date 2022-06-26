
void c(Node *root,unordered_set<int>&s,int hd)
{
    if(root==NULL)
    {
        return;
    }
    c(root->left,s,hd-1);
    s.insert(hd);
    c(root->right,s,hd+1);
}
int verticalWidth(Node *root)
{
    unordered_set<int>s;
    c(root,s,0);
    return s.size();
}