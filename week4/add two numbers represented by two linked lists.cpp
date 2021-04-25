#include<math.h>
#include<bits/stdc++.h>
Node *res=NULL;
void insert(int data)
{
    Node* t=new Node(data);
    if(res==NULL)
    {
        res=t;
    }
    else
    {
        t->next=res;
        res=t;
    }
}
class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code 
        int n=0,m=0;
        Node* temp=first;
        Node* temp1=second;
        stack<int> s,s1;
        while(temp!=NULL)
        {
            s.push(temp->data);
            temp=temp->next;
        }
        while(temp1!=NULL)
        {
            s1.push(temp1->data);
            temp1=temp1->next;
        }
        int c=-1;
        while(!s.empty()||!s1.empty())
        {
            if(c==-1)
            {
                res=NULL;
                c=0;
            }
            else if(s.empty())
               {int sum=c+s1.top();
                   insert(sum%10);
               c=sum/10;
               s1.pop();
               
               }
              else if(s1.empty())
               {int sum=c+s.top();
                   insert(sum%10);
               c=sum/10;
               s.pop();
               } 
               else
               {
                 int sum=c+s.top()+s1.top();
                 insert((sum%10));
                 c=sum/10;
                 s.pop();
                 s1.pop();
               }
        }
        if(s.empty()&&s1.empty())
            {
                if(c!=0)
                insert(c);
            }
            return res;
    }  
};
