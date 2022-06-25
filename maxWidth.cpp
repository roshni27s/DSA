//time:O(n) space:O(n)

int mw(Node *root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    int m = INT_MIN;
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        int count = q.size();
        for(int i=0;i<count;i++)
        {
            Node *temp = q.front();
            q.pop();
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
        m=max(m,temp->data);
    }
    return m;
}