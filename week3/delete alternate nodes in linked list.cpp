void deleteAlt(struct Node *head){
    // Code here
    Node *temp;
    while(head!=NULL&&head->next!=NULL)
    {
        temp=head->next;
        head->next=head->next->next;
      free(temp);
        head=head->next;
    }
}
