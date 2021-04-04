class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
       
       for(int i=0;i<n-2;i++)
       {int l=i+1,r=n-1;
           while(l<r)
           {
               if(A[l]+A[i]+A[r]<X)
               l++;
               else if(A[l]+A[i]+A[r]==X)
               return true;
               else r--;
           }
       }
       
       return false; 
    }

};
