#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	int a[256];
	for(int i=0;i<256;i++)
	{
	    a[i]=0;
	}
	for(int j=0;j<s.length();j++)
	a[s[j]]++;
	for(int i=0;i<256;i++)
	if(a[i]>1)
	cout<<(char)i;
	return 0;
}
