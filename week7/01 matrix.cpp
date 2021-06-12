class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
       vector<vector<int>> ans(mat.size(),vector<int>(mat[0].size(),INT_MAX));
       queue<pair<int,int>> q;
        for(int i=0;i<mat.size();i++)
            for(int j=0;j<mat[0].size();j++)
                if(mat[i][j]==0)
                {
                    ans[i][j]=0;
                    q.push({i,j});}
                    while(!q.empty())
                    {
                        int l=q.front().first;
                        int r=q.front().second;
                        q.pop();
                        if(l>=0&&l<mat.size()&&r>=0&&r<mat[0].size())
                        {
                            if(l+1<mat.size()&&ans[l+1][r]>ans[l][r]+1)
                            {ans[l+1][r]=ans[l][r]+1;
                             q.push({l+1,r});}
                            if(l-1>=0 && ans[l-1][r]>ans[l][r]+1)
                            {ans[l-1][r]=ans[l][r]+1;  
                                 q.push({l-1,r});}
                            if(r+1<mat[0].size() && ans[l][r+1]>ans[l][r]+1)
                            {ans[l][r+1]=ans[l][r]+1;
                              q.push({l,r+1});
                            }   
                            if(r-1>=0 &&ans[l][r-1]>ans[l][r]+1)
                            { ans[l][r-1]=ans[l][r]+1;
                                q.push({l,r-1});
                        }}
            }
        return ans;
    }
};
