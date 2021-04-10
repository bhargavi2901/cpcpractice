int r=matrix.size(),c=matrix[0].size();
     int *a=new int(r),*b=new int(c);
     for(int i=0;i<r;i++)
     a[i]=0;
     for(int i=0;i<c;i++)
     b[i]=0;
         for(int i=0;i<r;i++)
         {
             for(int j=0;j<c;j++)
             {
                 if(matrix[i][j]==1)
                 {
                     a[i]=1;
                     b[j]=1;
                 }
                 
             }
         }
         for(int i=0;i<r;i++)
         {
             for(int j=0;j<c;j++)
             {
                 if(a[i]==1||b[j]==1)
                   matrix[i][j]=1;
             }
         }
