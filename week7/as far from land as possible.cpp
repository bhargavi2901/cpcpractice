class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
 if(grid.size()==0)
     return -1;
    vector<vector<int>> dist(grid.size(),vector<int>(grid[0].size(),INT_MAX));
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    dist[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int max=0;
        if(q.empty()||q.size()==grid.size()*grid[0].size())
            return -1;
        while(!q.empty())
        {
            int l=q.front().first;
            int r=q.front().second;
            q.pop();
            if(dist[l][r]>max)
                max=dist[l][r];
            if(l>=0&&l<grid.size()&&r>=0&&r<grid[0].size())
            {
                if(l+1<grid.size()&&dist[l+1][r]>dist[l][r]+1)
                {dist[l+1][r]=dist[l][r]+1;
                 q.push({l+1,r});}
                if(l-1>=0&&dist[l-1][r]>dist[l][r]+1)
                {dist[l-1][r]=dist[l][r]+1;
                 q.push({l-1,r});}
                if(r+1<grid[0].size()&&dist[l][r+1]>dist[l][r]+1)
                {dist[l][r+1]=dist[l][r]+1;
                 q.push({l,r+1});}
                if(r-1>=0&&dist[l][r-1]>dist[l][r]+1)
                {dist[l][r-1]=dist[l][r]+1;
                 q.push({l,r-1});
                }
            }
        }
        return max;
    }
};
