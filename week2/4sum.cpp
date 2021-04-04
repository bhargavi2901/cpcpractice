class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector<vector<int>> v;
        vector<int> v1;
        if(nums.size()<4)
            return v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++)
        { 
            for(int j=i+1;j<nums.size()-2;j++)
            {int l=j+1;
             int r=nums.size()-1;
                while(l<r)
                {
                    long long sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[l]+(long long)nums[r];
                    if(sum==target)
                    {v1.push_back(nums[i]);
                     v1.push_back(nums[j]);
                     v1.push_back(nums[l]);
                     v1.push_back(nums[r]);
                        if(!count(v.begin(),v.end(),v1))
                        {
                            v.push_back(v1);
                        }
                     v1.clear();
                     l++;
                     r--;
                    }
                    else if(sum<target)
                        l++;
                    else
                        r--;
                }
            }
        }
         return v;
    }
};
