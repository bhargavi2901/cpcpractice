class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        int l=0,r=n-1,m;
        while(l<=r)
        {
            if(x<v[0])
               return -1;
               if(x>=v[n-1])
               return n-1;
            m=l+(r-l)/2;
            if(v[m]==x)
               return m;
            if(v[m]<x)
            l=m+1;
            else
            r=m-1;
        }
        return l;
    }
};
