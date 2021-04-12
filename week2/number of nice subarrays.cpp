class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {long long sum=0;
        if(nums[0]%2!=0)
            nums[0]=1;
        else
            nums[0]=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
            {
                nums[i]=nums[i-1]+1;
            }
            else
                nums[i]=nums[i-1];
        }
        unordered_map<int,int> m;
        m[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=k)
            {
                sum=sum+m[nums[i]-k];
            }
            m[nums[i]]++;
        }
        return sum;
    }
};
