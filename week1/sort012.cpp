class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int b=0,c=0,d=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                b++;
            }
            else if(a[i]==1)
            {
                c++;
            }
            else
            {
                d++;
            }
            
        }int i=0;
         while(b!=0)
            {
                a[i++]=0;
                b--;
            }
            while(c!=0)
            {
                a[i++]=1;
                c--;
            }
             while(d!=0)
            {
                a[i++]=2;
                d--;
            }
        
    }
    
};
