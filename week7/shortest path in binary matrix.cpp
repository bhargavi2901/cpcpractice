class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid.size()==0||grid[0][0]!=0||grid[grid.size()-1][grid[0].size()-1]!=0)
            return -1;
        vector<vector<int>> dist(grid.size(),vector<int>(grid[0].size(),INT_MAX));
        queue<pair<int,int>> q;
        dist[0][0]=1;
        q.push({0,0});
         while(!q.empty())
         {
             int l=q.front().first;
             int r=q.front().second;
             q.pop();
             grid[l][r]=1;
             if(l==grid.size()-1 && r==grid[0].size()-1)
                 return dist[l][r];
             if(l>=0 && l<grid.size() && r>=0 && r<grid[0].size())
             {
                  if(l+1<grid.size() && r+1<grid[0].size()&&grid[l+1][r+1]==0)
                  { dist[l+1][r+1]=min(dist[l+1][r+1],dist[l][r]+1);
                   grid[l+1][r+1]=1;
                   q.push({l+1,r+1});}
               if(r+1<grid[0].size()&&grid[l][r+1]==0)
               {dist[l][r+1]=min(dist[l][r+1],dist[l][r]+1);
                grid[l][r+1]=1;
                q.push({l,r+1});}
              if(l+1<grid.size()&&grid[l+1][r]==0)
              {dist[l+1][r]=min(dist[l+1][r],dist[l][r]+1);
               grid[l+1][r]=1;
               q.push({l+1,r});}
             if(l-1>=0 && grid[l-1][r]==0)
             {dist[l-1][r]=min(dist[l-1][r],dist[l][r]+1);
              grid[l-1][r]=1;
                 q.push({l-1,r});}
             if(r-1>=0&&grid[l][r-1]==0)
             {dist[l][r-1]=min(dist[l][r-1],dist[l][r]+1);
              grid[l][r-1]=1;
              q.push({l,r-1});}
         if(l+1<grid.size()&&r-1>=0&&grid[l+1][r-1]==0)
         {dist[l+1][r-1]=min(dist[l+1][r-1],dist[l][r]+1);
          grid[l+1][r-1]=1;
          q.push({l+1,r-1});}
        if(r+1<grid[0].size()&&l-1>=0&&grid[l-1][r+1]==0)
        {dist[l-1][r+1]=min(dist[l-1][r+1],dist[l][r]+1);
         grid[l-1][r+1]=1;
            q.push({l-1,r+1});}
        if(r-1>=0&&l-1>=0&&grid[l-1][r-1]==0)
        {dist[l-1][r-1]=min(dist[l-1][r-1],dist[l][r]+1);
         grid[l-1][r-1]=1;
            q.push({l-1,r-1});}
             }
         }
        return -1;
    }
};
