class Solution {
public:
    vector<int> v[50];
    int p;
    int dfs(vector<vector<int>>& grid,int i,int j)
    {
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||v[i][j]==1||grid[i][j]!=1)
        {
            return 0;
        }
        v[i][j]=1;
        if(dfs(grid,i,j+1)!=0)
            p=p+1;
        if(dfs(grid,i,j-1)!=0)
            p=p+1;
        if(dfs(grid,i+1,j)!=0)
            p=p+1;
        if(dfs(grid,i-1,j)!=0)
            p=p+1;
       return 1; 
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
                v[i].push_back(0);
        }
        int max=INT_MIN;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1 && v[i][j]!=1)
                {
                    p=1;
                    dfs(grid,i,j);
                    if(p>max)
                        max=p;
                }
            }
        }
        if(max==INT_MIN)
            return 0;
        return max;
    }
};
