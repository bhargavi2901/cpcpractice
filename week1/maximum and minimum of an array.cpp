pair<long long, long long> getMinMax(long long a[], int n) {
    int i=0;long long temp;
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {  
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    pair <long long,long long> p;
    p.second=a[n-1];
    for(int j=0;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    p.first=a[0];
    return p;
}
