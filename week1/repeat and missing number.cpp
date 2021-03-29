vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int c=0;
    for(int i=0;i<A.size();i++)
    c=c^A[i];
    for(int i=1;i<=A.size();i++)
    c=c^i;
    int k=c&~(c-1);
    int x=0,y=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]&k)
           x=x^A[i];
          else
          y=y^A[i];
    }
    for(int i=1;i<=A.size();i++)
    {
        if(i&k)
          x=x^i;
         else
         y=y^i;
    }vector<int> a;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==y)
            {a.push_back(y);
            a.push_back(x);
            return a;
            }
    }
    a.push_back(x);
    a.push_back(y);
    
    return a;
}
