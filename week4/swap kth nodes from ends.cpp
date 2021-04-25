Node *swapkthnode(Node* head, int num, int K)
{
    // Your Code here
    Node *temp=head;
    Node *lp=NULL;
    Node *l=head,*r=head,*rp=NULL,*t;
    int i=1;
    if(K>num)
    return head;
    if(2*K-1==num)
    return head;
    for(int i=1;i<K;i++)
    {
        lp=l;
        l=l->next;
    }
    for(int i=1;i<num-K+1;i++)
    {
        rp=r;
        r=r->next;
    }
   if(lp)
    lp->next=r;
    if(rp)
    rp->next=l;
    t=l->next;
    l->next=r->next;
    r->next=t;
    if(K==1)
    head=r;
    if(K==num)
    head=l;
    return head;
}
