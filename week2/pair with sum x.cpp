class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++)
	    {  
	        if(m.find(x-arr[i])!=m.end())
	          return true;
	         else
	       m[arr[i]]++;
	    }
	    return false;
	}
};
