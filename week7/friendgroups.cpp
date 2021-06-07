int solve(vector<vector<int>>& friends) {
    stack<int> s;
    int sum=0;
    int i=0;
    int v[friends.size()];
    for(int i=0;i<friends.size();i++)
    {
        v[i]=0;
    }
    int j;
    for(int i=0;i<friends.size();i++)
    {
       if(v[i]==0)
       {
       s.push(i);
       while(!s.empty())
       {
           j=s.top();
             v[j]=1;
          s.pop();
          for(auto it:friends[j])
          {
              if(v[it]!=1)
              s.push(it);
          }
       }
       sum=sum+1;}
    }
    return sum;
}
