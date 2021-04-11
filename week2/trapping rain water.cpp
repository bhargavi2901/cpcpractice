class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0)
            return 0;
      int lmax[n],rmax[n];
        lmax[0]=height[0];
        int sum=0;
        for(int i=1;i<n;i++)
        {
            if(lmax[i-1]>height[i])
            lmax[i]=lmax[i-1];
            else
                lmax[i]=height[i];
        }
        rmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {if(rmax[i+1]>height[i])
            rmax[i]=rmax[i+1];
         else
         rmax[i]=height[i];
        }
        for(int i=0;i<n;i++)
        {if(lmax[i]<rmax[i])
        sum=sum+lmax[i]-height[i];
            else sum=sum+rmax[i]-height[i];
        }
        return sum;
    }
};
