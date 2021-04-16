Node *res;
void insert(int data)
{
   Node* t=res;
    Node *temp=new Node(data);
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

Node* findIntersection(Node* head1, Node* head2)

    {
    // Your Code Here
    res=NULL;
    unordered_map<int,int> m;
    while(head1!=NULL)
    {
        m[head1->data]++;
        head1=head1->next;
    }
    while(head2!=NULL)
    {
        if(m[head2->data]==1)
        {
           insert(head2->data);
        }
        m[head2->data]++;
        head2=head2->next;
    }
    return res;
}
