class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,n=arr.size(),r=n-1,m;
        while(l<r)
        {
            m=l+(r-l)/2;
            if(arr[m]>arr[m+1])
            {
                r=m;
            }
            else 
                l=m+1;
        }
        return l;
    }
};
