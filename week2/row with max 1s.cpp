class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int sum=0,j,max=-1,c=-1;
	    for(int i=0;i<n;i++)
	    {auto it=find(arr[i].begin(),arr[i].end(),1);
           if(it!=arr[i].end())
           { 
               if(m-(it-arr[i].begin())>max)
               {
                   max=m-(it-arr[i].begin());
                   c=i;
               }
           }
	    }
	    return c;
	}

};
