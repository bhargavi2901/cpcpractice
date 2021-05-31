class Solution {
public:
    void leaves(Node *root,vector<int> &v)
    {
     if(root==NULL)
        return;
     else if(root->left==NULL && root->right==NULL)
        v.push_back(root->data);
     leaves(root->left,v);
     leaves(root->right,v);
    }
    vector <int> printBoundary(Node *root)
    {
        //Your code here
        vector<int> v;
        if(root==NULL)
           return v;
        Node *temp=root->left;
        v.push_back(root->data);
        while(temp)
        {if(temp->left || temp->right)
         v.push_back(temp->data);
         if(temp->left)
            temp=temp->left;
         else if(temp->right)
             temp=temp->right;
         else
           break;
        }
        leaves(root,v);
        temp=root->right;
        stack<int> s;
        while(temp)
        {if(temp->left||temp->right)
         s.push(temp->data);
         if(temp->right)
            temp=temp->right;
         else if(temp->left)
             temp=temp->left;
         else
           break;
        }
        while(!s.empty())
        {
         v.push_back(s.top());
         s.pop();
        }
        return v;
    }
};
