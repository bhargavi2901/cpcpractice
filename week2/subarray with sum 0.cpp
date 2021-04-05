class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
         unordered_map <int,int> sum;
         int s=0;
        for(int i=0;i<n;i++)
        {if(sum[s+arr[i]]>0||s+arr[i]==0)
        return true;
            sum[s+arr[i]]++;
            s=s+arr[i];
    }
    return false;
}
};
