void fun(struct node* p,struct node** next)
{
    if(p)
    {
        fun(p->right,next);
        p->next=*next;
        *next=p;
        fun(p->left,next);
    }
}
void populateNext(struct node* p)
{
   node *next=NULL;
   fun(p,&next);
}
