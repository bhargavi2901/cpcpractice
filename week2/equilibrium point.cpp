class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int sum[n];
        sum[0]=a[0];
        if(n==1)
        return 1;
        for(int i=1;i<n;i++)
        {
            sum[i]=sum[i-1]+a[i];
        }
        if(sum[n-1]-sum[0]==0)
        {
            return 1;
        }
        for(int i=1;i<n-1;i++)
        {
            if(sum[i-1]==sum[n-1]-sum[i])
            return i+1;
        }
        if(sum[n-2]==0)
        return n;
        return -1;
    }

};
