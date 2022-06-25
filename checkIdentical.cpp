bool isIdentical(Node *r1,Node *r2)
{
    if(r1==NULL && r2==NULL)
    {
        return true;
    }
    else if(r1==NULL || r2==NULL)
    {
        return false;
    }
    else
    {
        queue<Node *>q1,q2;
        q1.push(r1);
        q2.push(r2);
        while(!q.empty() || !q2.empty())
        {
            Node *curr1=q1.front();
            Node *curr2=q2.front();
            q1.pop();
            q2.pop();
            if(curr1->data!=curr2->data)
            {
                return false;
            }
            if(curr1->left)
            {
                q1.push(curr1->left);
            }
            if(curr1->right)
            {
                q1.push(curr1->right);
            }
            if(curr2->left)
            {
                q2.push(curr2->left);
            }
            if(Curr2->right)
            {
                q2.push(Curr2->right);
            }
        }
        return true;
    }
}