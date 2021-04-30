class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,m,n=nums.size(),r=n-1,flag=0;
        while(l<=r)
        {
            m=l+(r-l)/2;
            if(nums[m]==target)
            {flag=1;break;}
            if(nums[m]<target)
                l=m+1;
            else
                r=m-1;
        }
        if(flag==0)
                    return {-1,-1};
        
            l=m-1,r=m+1;
            while(l>=0&&nums[l]==target)
                l--;
            while(r<n&&nums[r]==target)
                r++;
            return {l+1,r-1};
        

    }
};
