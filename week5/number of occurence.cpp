class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int l=0,r=n-1,m,flag=0;
	    while(l<=r)
	    {
	        m=l+(r-l)/2;
	        if(arr[m]==x)
	           {flag=1;break;}
	        if(arr[m]<x)
	          l=m+1;
	          else
	          r=m-1;
	    }
	    if(flag==0)
	    return 0;
	     l=m-1,r=m+1;
	     int sum=1;
	    while(l>=0&&arr[l]==x)
	    {
	        l--;
	        sum++;
	    }
	    while(r<=n-1&&arr[r]==x)
	    {
	        r++;
	        sum++;
	    }
	    return sum;
	}
};
