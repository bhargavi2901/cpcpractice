class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        vector <int> v;
        int min1[N],max1[N];
        min1[0]=-1;
        int min=arr[0],max=arr[N-1];
        for(int i=1;i<N;i++)
        {
            if(arr[i]<=min)
            {
                min=arr[i];
                min1[i]=-1;
            }
            else
            {
                min1[i]=min;
            }
        }max1[N-1]=-1;
        for(int i=N-2;i>=0;i--)
        {
            if(arr[i]>=max)
            {
                max=arr[i];
                max1[i]=-1;
            }
            else
            {
                max1[i]=max;
            }
        }
        for(int i=1;i<N-1;i++)
        {
            if(min1[i]!=-1&&max1[i]!=-1)
            {
                v.push_back(min1[i]);
                v.push_back(arr[i]);
                v.push_back(max1[i]);
                return v;
            }
        }
        return v;
    }
};
