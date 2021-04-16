Node *res;
void insert(int data)
{
    Node *temp=new Node(data),*t=res;
    if(res==NULL)
    {
        res=temp;
    }
    else
    {
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=temp;
    }
}

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    res=NULL;
    map <int,int> m;
    while(head1!=NULL)
    {
        m[head1->data]++;
        head1=head1->next;
    }
    while(head2!=NULL)
    {
        m[head2->data]++;
        head2=head2->next;
    }
    for(auto it:m)
    {
        insert(it.first);
    }
    return res;
      
}
