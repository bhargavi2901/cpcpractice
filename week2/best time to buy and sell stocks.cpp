class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int max=0,min=prices[0];
        for(int i=0;i<n;i++)
        {
            if(prices[i]<min)
                min=prices[i];
            else if(prices[i]-min>max)
                max=prices[i]-min;
        }
        return max;
    }
};
