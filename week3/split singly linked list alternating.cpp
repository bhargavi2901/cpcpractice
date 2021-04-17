void insert1(int data)
{
    struct Node *temp=new Node(data);
    struct Node *head=a;
    if(a==NULL)
       a=temp;
      else
      {
          while(head->next!=NULL)
          {
              head=head->next;
          }
          head->next=temp;
      }
}
void insert2(int data)
{
    struct Node *temp=new Node(data);
    struct Node *head=b;
    if(b==NULL)
       b=temp;
      else
      {
          while(head->next!=NULL)
          {
              head=head->next;
          }
          head->next=temp;
      }
}

void alternatingSplitList(struct Node* head) 
{
    //Your code here
    struct Node *temp=head->next;
    while(head)
    {
       insert1(head->data);
       if(head->next==NULL)
       break;
       head=head->next->next;
    }
    while(temp)
    {
        insert2(temp->data);
        if(temp->next==NULL)
        break;
        temp=temp->next->next;
    }
    
}
