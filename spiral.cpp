//time:O(n) space:O(n)

void spiral(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    stack<Node *>s1,s2;
    s1.push(root);
    while(s1.empty()==false || s2.empty()==false)
    {
        while(s1.empty()==false)
        {
            Node *curr=s1.top();
            s1.pop();
            cout<<curr->data<<" ";
            if(curr->left)
            {
                s2.push(curr->left);
            }
            if(curr->right)
            {
                s2.push(curr->right);
            }
        }
        while(s2.empty()==false)
        {
            Node *curr=s2.top();
            s2.pop();
            cout<<curr->data<<" ";
            if(curr->right)
            {
                s1.push(curr->right);
            }
            if(curr->left)
            {
                s1.push(curr->left);
            }
        }
    }
}