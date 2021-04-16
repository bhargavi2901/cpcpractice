int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int n=0,n1=0;
    Node *temp1=head1,*temp2=head2;
    while(temp1!=NULL)
    {
        n++;
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        n1++;
        temp2=temp2->next;
    }
    temp1=head1,temp2=head2;
    if(n>=n1)
    {
       while(temp1!=NULL&&n!=n1)
       {
           temp1=temp1->next;
           n--;
       }
    }
    else
     while(temp2!=NULL&&n!=n1)
       {
           temp2=temp2->next;
           n1--;
       }
    while(temp1&&temp2)
    {
        if(temp1==temp2)
        {
            return temp1->data;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return -1;
    
}
