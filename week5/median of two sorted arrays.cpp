       double median(vector<int>& nums1, vector<int>& nums2)
    {
        int n1=nums1.size(),n2=nums2.size();
        int l=0,h=n1,px,py;
        while(l<=h)
        {
            px=(l+h)/2;
            py=(n1+n2+1)/2-px;
        long long maxleft1=(px==0)?(-1000000):nums1[px-1];
        long long minright1=(px==n1)?(1000000):nums1[px];
        long long maxleft2=(py==0)?(-1000000):nums2[py-1];
        long long minright2=(py==n2)?(1000000):nums2[py];
        if(maxleft1<=minright2&&maxleft2<=minright1)
        {
            if((n1+n2)%2==0)
            {
                return (double)(max(maxleft1,maxleft2)+min(minright1,minright2))/2;
                
            }
            else
                return (double)max(maxleft1,maxleft2);
        }
        if(maxleft1>minright2)
            h=px-1;
        else 
            l=px+1;
    }
return -1.0;
    }
double MedianOfArrays(vector<int>& nums1, vector<int>& nums2)
{
    // Your code goes here

        int n1=nums1.size(),n2=nums2.size();
        if(n1>n2)
        {
         return median(nums2,nums1);
        }
        return median(nums1,nums2);
   
}
