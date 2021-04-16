class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *temp=head;
        stack<int> s;
        while(head!=NULL)
        {
            s.push(head->data);
            head=head->next;
        }
        head=temp;
        while(!s.empty())
        {
            if(head->data==s.top())
            {
                s.pop();
                head=head->next;
            }
            else
            return false;
        }
        return true;
        }
};
