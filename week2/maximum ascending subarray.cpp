class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0],max=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {sum=sum+nums[i];
             if(sum>max)
             max=sum;}
            else
            {sum=0;sum=nums[i];}
        }
        return max;
    }
};
