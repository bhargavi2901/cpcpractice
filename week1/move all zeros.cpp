class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int j=0,count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=0)
	        {
	            arr[j++]=arr[i];
	        }
	        else
	        count++;
	    }
	    while(count!=0)
	    {
	        arr[j++]=0;
	        count--;
	    }
	}
};
