long long  multiplyTwoLists (Node* head1, Node* head2)
{
  //Your code here
  long long a=0;
  long long b=0;
while(head1!=NULL)
  {
    a=(a*10+(head1->data))%(1000000000+7); 
    head1=head1->next;
  }
  while(head2!=NULL)
  {
      b=(b*10+(head2->data))%(1000000000+7);
      head2=head2->next;
  }
  long long c=a*b;
  return c%(1000000000+7);
}
