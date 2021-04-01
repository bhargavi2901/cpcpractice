class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_map<int,int> p;
        for(int i=0;i<n;i++)
        {
            p[a[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            p[b[i]]++;
        }
        return p.size();
    }
};
