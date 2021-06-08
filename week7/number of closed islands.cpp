class Solution {
public:
    vector<int> v[100];
    int flag;
    void dfs(vector<vector<int>>& grid,int i,int j)
    {
        if(i<0 || i>=grid.size()||j<0||j>=grid[0].size())
        {flag=1;
            return;
        }
        if(v[i][j]==1 || grid[i][j]!=0)
            return;
        v[i][j]=1;
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
    }
    int closedIsland(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
                v[i].push_back(0);
        }
        int sum=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0 && v[i][j]!=1)
                {
                   flag=0;
                    dfs(grid,i,j);
                    if(flag!=1)
                    sum=sum+1;
                }
            }
        }
        return sum;
    }
};
