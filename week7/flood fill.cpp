class Solution {
public:
    vector<int> v[50];
    int t,n,m;
    void fill(vector<vector<int>> &image,int r,int c,int cr)
    {
      
        if(r>=n || r<0 || c<0 || c>=m || v[r][c]==1 || image[r][c]!=t)
            return;
        v[r][c]=1;
        t=image[r][c];
        image[r][c]=cr;
        fill(image,r-1,c,cr);
        fill(image,r+1,c,cr);
        fill(image,r,c-1,cr);
        fill(image,r,c+1,cr);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        t=image[sr][sc];
        n=image.size();
        m=image[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                v[i].push_back(0);
        }
        fill(image,sr,sc,newColor);
        return image;
    }
};
