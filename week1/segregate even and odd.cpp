class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    map <int,int> a,b;
        int m=0,p=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]&1)
	          {a[arr[i]]++;
	          m++;
	          }
	         else
	         {b[arr[i]]++;
	         p++;
	         }
	    }
	     int i=0;
	         for(auto it:b)
	         {  for(int j=0;j<it.second;j++)
	             arr[i++]=it.first;
	         }
	        for(auto it:a)
	         {  for(int j=0;j<it.second;j++)
	             arr[i++]=it.first;
	         }
	}
};
