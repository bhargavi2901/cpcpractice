#include<iostream>
#include<math.h>
using namespace std;

int main() {
	//code
	int t,n,a[400];
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    for(int j=0;j<n*n;j++)
	    cin>>a[j];
	    int c=1,b=0,k=0;
	    while(b<2*n-1)
	    {if(b>=n)
	       k=b+(n-c)*(n-1);
	   else
	   k=b;
	     for(int j=0;j<c;j++)  
	     {
	         cout<<a[k]<<" ";
	         k=k+n-1;
	     }
	     if(b>=n-1)
	     {
	         c--;
	     }
	     else
	     c++;
	     b++;
	    }
	    cout<<endl;
	}
	
	return 0;
}
