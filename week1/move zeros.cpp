class Solution {
public:
    void moveZeroes(vector<int>& nums) {int temp;
        	    int j=0,count=0;
	    for(int i=0;i<nums.size();i++)
	    {
	        if(nums[i]!=0)
	        {
	            nums[j++]=nums[i];
	        }
	        else
	        count++;
	    }
	    while(count!=0)
	    {
	        nums[j++]=0;
	        count--;
	    }
	}
    
};
