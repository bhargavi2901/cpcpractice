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

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
    res=NULL;
    unordered_map<int,int> m;
    while(head2!=NULL)
    {
        m[head2->data]++;
        head2=head2->next;
    }
    while(head1!=NULL)
    {
        if(m[head1->data]==1)
        {
           insert(head1->data);
        }
        m[head1->data]++;
        head1=head1->next;
    }
    return res;
}
    };
