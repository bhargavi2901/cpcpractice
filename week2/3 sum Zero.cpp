vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int>> v;
    vector <int> v1;
    if(A.size()<3)
    return v;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-2;i++)
    {
        int l=i+1,r=A.size()-1;
        while(l<r)
        {long long sum=(long long)A[l]+(long long)A[i]+(long long)A[r];
            if(sum==0)
               {
                   v1.push_back(A[i]);
                   v1.push_back(A[l]);
                   v1.push_back(A[r]);
                   if(!count(v.begin(),v.end(),v1))
                   v.push_back(v1);
                   v1.clear();
                   l++;
                   r--;
               }
             else if(A[l]+A[i]+A[r]<0)
                l++;
            else
            r--;
        }
    }
   
    return v;
   
}
