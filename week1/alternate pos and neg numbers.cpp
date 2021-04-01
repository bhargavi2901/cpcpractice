class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    int sum=0,a[n];
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        sum++;
	    }
	    int p=n-1-sum,j=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        {
	            if(sum>0)
	            {
	            a[j]=arr[i];
	            j=j+2;
	            sum--;
	            }
	            else
	            {
	                a[j++]=arr[i];
	            }
	        }
	    }int k=1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        {
	            if(p!=0)
	            {
	                a[k]=arr[i];
	                k=k+2;
	                p--;
	            }
	            else
	            a[k++]=arr[i];
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        arr[i]=a[i];
	    }
	}
	
};
