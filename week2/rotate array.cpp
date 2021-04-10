#include<iostream>
using namespace std;

int main() {
	//code
	int t,n,d,i,j;
	cin>>t;
	for(i=0;i<t;i++)
	{   cin>>n>>d;
	  int arr[n],a[n];
	    for(j=0;j<n;j++)
	       cin>>arr[j];
	    int k=0;
	    for(j=0;j<d;j++)
	    a[j]=arr[j];
	    for(j=0;j<n-d;j++)
	    {
	        arr[j]=arr[j+d];
	    }
	    k=0;
	    for(j=n-d;j<n;j++)
	      arr[j]=a[k++];
	      for(j=0;j<n;j++)
	      cout<<arr[j]<<" ";
	cout<<endl;
	}
	return 0;
}
