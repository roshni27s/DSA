//time:O(n) space:O(n)

void left(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        int count = q.size();
        for(int i=0;i<count;i++)
        {
            Node *temp = q.front();
            q.pop();
            if(i==0)
            {
                cout<<temp->data<<" ";
            }
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}