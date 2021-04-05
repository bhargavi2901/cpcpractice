class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here
            sort(arr,arr+n);
                int l=0;
                int r=n-1;
                int min=INT_MAX;
                while(l<r)
                {
                    if((long long)arr[l]+(long long)arr[r]==0)
                      return 0;
                     else if(abs((long long)arr[l]+(long long)arr[r])<=abs(min))
                         {   if(abs((long long)arr[l]+(long long)arr[r])==abs(min))
                             {
                                 if((long long)arr[l]+(long long)arr[r]>min)
                                 min=(long long)arr[l]+(long long)arr[r];
                             }
                             else
                             min=(long long)arr[l]+(long long)arr[r];
                         }
                        if((long long)arr[l]+(long long)arr[r]<0)
                         l++;
                         else r--;
                }
                    
                
                return min;
        }
};
