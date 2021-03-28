int MissingNumber(vector<int>& array, int n) {
    // Your code goes here
    int c=0;
    for(int i=0;i<n-1;i++)
        c=c^array[i];
    for(int i=1;i<=n;i++)
       c=c^i;
    return c;
}
