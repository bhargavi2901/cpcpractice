class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            c=c^nums[i];
        }
        int k=c&~(c-1),x=0,y=0;
        for(int i=0;i<nums.size();i++)
        {
            if(k&nums[i])
            x=x^nums[i];
            else
            y=y^nums[i];
        }
        vector <int> v;
        if(x<y)
        {
        v.push_back(x);
        v.push_back(y);
        }
        else
        {
            v.push_back(y);
            v.push_back(x);
        }
        return v;
    }
};
