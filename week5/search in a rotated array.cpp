class Solution{
    public:
    int search(int A[], int l, int h, int key){
    //complete the function here
    while(l<=h&&A[l]>=A[0])
    {
        l++;
    }
    long long r=l+h;
    while(l<=r)
    {
        long long  m=l+(r-l)/2;
        if(A[m%(h+1)]==key)
        return m%(h+1);
        if(A[m%(h+1)]<key)
        {
            l=m+1;
        }
        else
          r=m-1;
    }
    return -1;
    }
};
