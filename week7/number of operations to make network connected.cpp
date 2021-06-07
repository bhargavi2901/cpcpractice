class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections1) {
        int t,sum=0;
         vector<int> connections[n];
    if(n-1>connections1.size())
        return -1;
        else
        {
        for(auto i:connections1)
        {
                connections[i[0]].push_back(i[1]);
                connections[i[1]].push_back(i[0]);
            }
        
          int a[n];
            for(int i=0;i<n;i++)
                a[i]=0;
            stack<int> s;
            for(int i=0;i<n;i++)
            {
                if(a[i]!=1)
                {
                    s.push(i);
                    while(!s.empty()){
                    int j=s.top();
                        a[j]=1;
                    s.pop();
                    for(auto it:connections[j])
                    {
                        if(a[it]!=1)
                        {
                            s.push(it);
                        }
                    }
                }sum++;}
            }
            return sum-1;
        }}
    
};
