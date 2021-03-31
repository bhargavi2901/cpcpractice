class Solution {
public:
    int titleToNumber(string columnTitle) {
        int i,sum=0;
        for(i=0;i<columnTitle.length();i++)
        {
            sum=sum*26+(columnTitle[i]-64);
        }
        return sum;
    }
};
