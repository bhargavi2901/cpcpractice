class Solution {
public:
    int n,m;
    vector<vector<int>> v;
    int per(vector<vector<int>>& grid,int i,int j,int *sum)
    {
        if(i<0 || j<0 || i>=n||j>=m || grid[i][j]!=1)
            return 1;
        if(v[i][j]==1)
            return 0;
        v[i][j]=1;
        if(per(grid,i+1,j,sum)==1)
            *sum=*sum+1;
        if(per(grid,i-1,j,sum)==1)
            *sum=*sum+1;
        if(per(grid,i,j+1,sum)==1)
            *sum=*sum+1;
        if(per(grid,i,j-1,sum)==1)
            *sum=*sum+1;
        return 0;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        n=grid.size();m=grid[0].size();
        vector<int> v1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                v1.push_back(0);
            }
            v.push_back(v1);
            v1.clear();
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]!=1 && grid[i][j]==1)
                    per(grid,i,j,&sum);
            }

        }
                  return sum;
    }
};
