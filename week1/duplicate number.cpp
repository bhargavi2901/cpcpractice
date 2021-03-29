class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      map<int,int> c;
      
        for(int i=0;i<nums.size();i++)
        {
            if(c[nums[i]]==1)
                return nums[i];
            else
                c[nums[i]]++;
        }
        return 0;
    }
};
