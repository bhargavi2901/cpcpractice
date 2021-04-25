class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
       Node *temp=head,*temp1=head->next,*temp2;
       if(head->next==NULL)
       return head;
       head=head->next;
       while(1)
       {
        temp2=temp1->next;
        temp1->next=temp;
        if(temp2==NULL||temp2->next==NULL)
        {temp->next=temp2;
        break;
        }
        temp->next=temp2->next;
        temp=temp2;
        temp1=temp->next;
       }
       return head;
    }
};
