void removeLoop(Node* head)
{
    // code here
    // just remove the loop without losing any nodes
   struct Node  *t,*t1,*t2;
    t=head;
    t1=head;
     while(t&&t1&&t1->next)
     {
        t=t->next;
        t2=t1->next;
        t1=t1->next->next;
        if(t==t1)
           break;
     }
     if(t==t1)
     { t=head;
     while(t!=t1)
     {   t2=t1;
         t=t->next;
         t1=t1->next;
     }
     t2->next=NULL;
     }
   
}
