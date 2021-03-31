class Solution {
public:
    bool isPalindrome(int x) {int sum=0;
        int k=x;
        if(x<0)
        return false;
        while(k>0)
        {
            sum=sum+1;
            k=k/10;
        }
        while(sum>1)
        {
            int n=x%10;
            x=x/10;
            sum--;
            int m=x/int(pow(10,sum-1));
            if(m!=n)
                return false;
            x=x-(pow(10,sum-1)*m);
            sum--;
        }
        return true;
    }
};
