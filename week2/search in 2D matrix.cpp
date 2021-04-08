class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	       if(X<mat[0][0]||X>mat[N-1][M-1])
	       return 0;
	       int i=0,j=M-1;
	       while(i<N&&j>=0)
	       {
	           if(mat[i][j]==X)
	           return 1;
	           if(mat[i][j]<X)
	           i++;
	           else
	           j--;
	       }
	   return 0;
	}
};
