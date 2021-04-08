class Solution{
    public:
    // Function to find the subarray with given sum k
    // arr: input array
    // n: size of array
    vector<int> subarraySum(int arr[], int n, int s){
        
        // Your code here
        long long sum=0;
        int j=0,i;
        vector<int> v1;
        for(i=0;i<n;i++)
        {sum=sum+arr[i];
        while(sum>s &&j<=n-1)
        {     sum=sum-arr[j];
                j++;
            }
        if(sum==s)
        {
          v1.push_back(j+1);
          v1.push_back(i+1);
          return v1;
        }
        }
        v1.push_back(-1);
        return v1;
      }
};
