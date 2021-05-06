class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> v;
        int n=arr.size();
        int l=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        int r=l;
        l=l-1;
        while(l>=0&&r<n&&k)
        {
           if(abs(x-arr[l])<=abs(x-arr[r]))
           {
               v.push_back(arr[l]);
               l--;
               k--;
           }
            else
            {
                v.push_back(arr[r]);
                r++;
                k--;
            }
        }
        while(l>=0&&k)
        {
             v.push_back(arr[l]);
               l--;
               k--;
        }
        while(r<n&&k)
        {
             v.push_back(arr[r]);
                r++;
                k--;
        }
        sort(v.begin(),v.end());   
        return v;
    }
};
