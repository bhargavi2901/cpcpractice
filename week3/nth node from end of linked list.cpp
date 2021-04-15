int getNthFromLast(Node *head, int n)
{
       // Your code here
       int sum=0;
       Node *temp=head;
       for(int i=0;i<n-1&&head!=NULL;i++)
       {
           head=head->next;
        }
        if(head==NULL)
        {
            return -1;
        }
        while(head->next!=NULL)
        {
            head=head->next;
            temp=temp->next;
        }
    
       return temp->data;
}
