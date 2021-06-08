class Solution {
public:
    vector<int> v[300];
    void dfs(vector<vector<char>>& grid,int i,int j)
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]=='0'||v[i][j]==1)
            return;
        v[i][j]=1;
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
    }
    int numIslands(vector<vector<char>>& grid) {
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
                if(grid[i][j]=='1' && v[i][j]!=1)
                {
                    dfs(grid,i,j);
                    sum=sum+1;
                }
            }
        }
        return sum;
    }
};
