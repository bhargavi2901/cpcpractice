int solve(vector<vector<int>>& matrix) {
    queue<pair<int,int>> q;
    int sum=0;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {if(matrix[i][j]==1)
        sum++;
        if(matrix[i][j]==2)
        {
            q.push({i,j});
        }}
    }
    if(sum==0)
    return 0;
    int t=0;
  while(!q.empty())
 {
     int m=q.size();
     while(m){
   int l=q.front().first;
   int r=q.front().second;
   q.pop();
   if(l>=0 &&l<matrix.size() && r>=0 && r<matrix[0].size())
   {
      
       if(l+1<matrix.size() && matrix[l+1][r]==1)
       {q.push({l+1,r});matrix[l+1][r]=2;}
       if(r+1<matrix[0].size() && matrix[l][r+1]==1)
       {q.push({l,r+1});matrix[l][r+1]=2;}
       if(l-1>=0 && matrix[l-1][r]==1 )
       {q.push({l-1,r});matrix[l-1][r]=2;}
       if(r-1>=0 && matrix[l][r-1]==1)
       {q.push({l,r-1});matrix[l][r-1]=2;}
       }
       m--;  
 }
 t++;
 }sum=0;
 for(int i=0;i<matrix.size();i++)
 {
     for(int j=0;j<matrix[0].size();j++)
     {
         if(matrix[i][j]==1)
          sum++;
     }
 }
 if(sum>0)
 return -1;
 return t-1;
}
