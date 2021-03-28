class Solution{
    public:
    // Function to find the two repeated element
    // arr: input array
    // N: denoting that the size of array is N + 2 and range of elements is [1, N]
    pair<int,int> twoRepeated (int arr[], int N)
    {
        // Your code here
       int *count=(int*)malloc((N+2)*sizeof(int));
       pair<int,int> p;
       int a[2],k=0;
       for(int i=0;i<N+2;i++)
       {
           if(count[arr[i]]==1)
           {
               a[k++]=arr[i];
           }
           else
           count[arr[i]]=1;
       }
      p.first=a[0];
      p.second=a[1];
      return p;
    }
};
