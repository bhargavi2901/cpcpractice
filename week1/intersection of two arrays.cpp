class Solution{
    public:
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    int NumberofElementsInIntersection (int a[], int b[], int n, int m )
    { 
        unordered_map<int,int> p;
        int sum=0;
        for(int i=0;i<n;i++)
        {
              p[a[i]]++;
        }
        for(int i=0;i<m;i++)
        { if(p[b[i]]>=1)
        {
            sum++;
            p[b[i]]=0;
        }
        }
       return sum;     
    }
};
