bool solve(int n, vector<vector<int>>& friends) {
    int a[n];
    memset(a,0,sizeof(a));
    for(auto it:friends)
    {
        for(auto i:it)
        {
            a[i]=1;
        }
    }
    for(int i=0;i<n;i++)
{
    if(a[i]!=1)
    return false;
}
    return true;
}
