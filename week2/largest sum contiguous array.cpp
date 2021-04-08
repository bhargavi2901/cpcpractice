class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int sum=0,max=INT_MIN;
        for(int i=0;i<n;i++)
        { sum=sum+arr[i];
            if(sum>max)
            {
                max=sum;
            }
            if(sum<0)
            sum=0;
        }
        return max;
    }
};
