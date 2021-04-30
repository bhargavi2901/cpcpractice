class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int c=0,num=0;
        for(int i=0;i<size;i++)
        {
            if(a[i]==num)
            c++;
            else if(c==0)
            {
                num=a[i];
                c++;
            }
            else
            c--;
        }int count=0;
        for(int i=0;i<size;i++)
        {
            if(a[i]==num)
              count++;
        }
        if(count>size/2)
        return num;
        return -1;
    }
};
