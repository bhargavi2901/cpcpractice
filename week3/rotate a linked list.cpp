class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        queue<int> q;
        Node *temp=head;
        while(head!=NULL)
        {
            q.push(head->data);
            head=head->next;
        }
        for(int i=0;i<k;i++)
        {
            q.push(q.front());
            q.pop();
        }
        head=temp;
        while(!q.empty())
        {
            head->data=q.front();
            head=head->next;
            q.pop();
        }
        return temp;
    }
};
