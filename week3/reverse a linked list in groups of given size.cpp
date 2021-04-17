class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        struct node *temp=head,*temp1=head;
        stack <int> s;
        int sum=0;
         while(temp!=NULL)
         {
             s.push(temp->data);
             temp=temp->next;
             sum++;
             if(sum==k)
             {sum=0;
              while(!s.empty())
              {
                  head->data=s.top();
                  s.pop();
                  head=head->next;
              }
             }
         }
         while(!s.empty())
         {
             head->data=s.top();
             s.pop();
             head=head->next;
         }
         return temp1;
    }
};
