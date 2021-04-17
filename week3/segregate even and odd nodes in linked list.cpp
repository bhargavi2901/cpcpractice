class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        vector<int> v,v1;
        Node *temp=head;
        while(temp!=NULL)
        {
           if((temp->data)%2==0)
           v.push_back(temp->data);
           else
           v1.push_back(temp->data);
           temp=temp->next;
        }
        temp=head;
        while(!v.empty())
        {
            temp->data=v.front();
            v.erase(v.begin());
            temp=temp->next;
        }
         while(!v1.empty())
         {
          temp->data=v1.front();
            v1.erase(v1.begin());
            temp=temp->next;   
         }
        return head;
    }
};
