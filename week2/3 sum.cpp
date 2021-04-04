int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int min=INT_MAX,sum1;
    for(int i=0;i<A.size()-2;i++)
    {
      int l=i+1;
      int r=A.size()-1;
      while(l<r)
      {long long sum=(long long)A[i]+(long long)A[l]+(long long)A[r];
        if(sum==B)
           return B;
        else if(sum<B)
        {
            if(B-sum<min){
              min=B-sum;
              sum1=B-min;}
              l++;
        }
        else
        {
            if(sum-B<min){
              min=sum-B;
              sum1=min+B;}
           r--;
        }
      }
    }
    return sum1;
}
