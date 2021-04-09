class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector <int> v1;
        int l=0,n=c-1,m=r-1,t=0;
        while(v1.size()!=r*c)
        {
            for(int i=t;i<=n;i++)
            {
                v1.push_back(matrix[l][i]);
            }
             l++;
            for(int i=l;i<=m;i++)
            {
                v1.push_back(matrix[i][n]);
            }
             n--;
             if(l<=m)
             {
            for(int i=n;i>=t;i--)
            {
                v1.push_back(matrix[m][i]);
            }
            m--;
             }
             if(t<=n)
             {
            for(int i=m;i>=l;i--)
            {
                v1.push_back(matrix[i][t]);
            }
            t++;
            }
             
        }
       
        return v1;
    }
};
