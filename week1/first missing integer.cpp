int Solution::firstMissingPositive(vector<int> &A) {
     int flag=0;
  for(int i=0;i<A.size();i++)
  {
      if(A[i]==1)
      {
         flag=1;
      }
  }
  if(flag!=1)
    return 1;
    else
    {
        for(int i=0;i<A.size();i++)
        {
            if(A[i]<0||A[i]>A.size())
            {
                A[i]=1;
            }
        }
        for(int i=0;i<A.size();i++)
        {
            A[(A[i]-1)%A.size()]+=A.size();
        }
        for(int i=0;i<A.size();i++)
        {
            if(A[i]<=A.size())
            return i+1;
        }
        return A.size()+1;
    }
}
