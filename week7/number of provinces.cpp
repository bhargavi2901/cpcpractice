class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
    stack<int> s;
    int sum=0;
    int i=0;
    int v[isConnected.size()];
    for(int i=0;i<isConnected.size();i++)
    {
        v[i]=0;
    }
    int j;
    for(int i=0;i<isConnected.size();i++)
    {
        if(v[i]==0)
       {
       s.push(i);
       while(!s.empty())
       {  
           j=s.top();
             v[j]=1;
          s.pop();
          for(int k=0;k<isConnected.size();k++)
          {
              if(v[k]!=1 && isConnected[j][k]==1)
              s.push(k);
          }
       }
       sum=sum+1;
        }
    }
    return sum;
}
    
};
