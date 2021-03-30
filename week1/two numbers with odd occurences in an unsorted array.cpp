class Solution{
    public:
    vector<int> twoOddNum(int Arr[], int N)  
    {
        // code here
        int c=0;
        for(int i=0;i<N;i++)
        {
            c=c^Arr[i];
        }
        int k=c&~(c-1);
        int x=0,y=0;
        for(int i=0;i<N;i++)
        {
            if(k&Arr[i])
              x=x^Arr[i];
             else
             y=y^Arr[i];
        }
        vector <int> v;
        if(x>y)
          {
              v.push_back(x);
              v.push_back(y);
          }
          else
           {
               v.push_back(y);
               v.push_back(x);
           }
           return v;
    }
};
