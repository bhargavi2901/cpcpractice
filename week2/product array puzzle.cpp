vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    //code here
    vector<long long > v,v1,v2;
    v.push_back(1);
    for(int i=1;i<n;i++)
     {
         v.push_back(v[i-1]*nums[i-1]);
     }
     v1.insert(v1.begin(),1);
     for(int i=n-2;i>=0;i--)
     {  
         v1.insert(v1.begin(),v1[0]*nums[i+1]);
     }
     for(int i=0;i<n;i++)
     {
         v2.push_back(v[i]*v1[i]);
     }
    return v2;
}
