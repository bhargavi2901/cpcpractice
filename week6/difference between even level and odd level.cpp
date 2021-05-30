class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
       //Your code here
       int se=0,so=0;
       queue<Node*> q;
       q.push(root);
       int c=0;
       while(!q.empty())
       {
           int m=q.size();
           while(m)
           {
           Node *temp=q.front();
           q.pop();
           if(temp->left)
           q.push(temp->left);
           if(temp->right)
           q.push(temp->right);
           if(c==0)
           so=so+temp->data;
           else if(c==1)
           se=se+temp->data;
           m--;}
           if(c==0)
           c=1;
           else
           c=0;
           }
       return so-se;
    }
};
