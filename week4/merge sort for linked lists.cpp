class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* merge(Node *a,Node *b)
    {
        
        if(a==NULL)
        return b;
        if(b==NULL)
        return a;
        if(a->data<=b->data)
        {
           a->next=merge(a->next,b);
           return a;
        }
        else
        {
            b->next=merge(a,b->next);
            return b;
        }
        
    }
    Node* mergeSort(Node* head) {
        // your code here
        Node *a,*b,*slow,*fast;
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
            slow=head;
            fast=head->next;
            while(fast&&fast->next)
            {
                slow=slow->next;
                fast=fast->next->next;
            }
        b=slow->next;
        a=head;
        slow->next=NULL;
        return merge(mergeSort(a),mergeSort(b));
    }
};
