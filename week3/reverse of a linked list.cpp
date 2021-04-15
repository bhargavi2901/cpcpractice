class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        stack <struct Node*> s;
        while(head->next!=NULL)
        {
            s.push(head);
            head=head->next;
        }
        struct Node*temp=head;
        while(s.size()>=1)
        {
            temp->next=s.top();
            temp=temp->next;
            s.pop();
        }
        temp->next=NULL;
        return head;
    }
    
};
    
