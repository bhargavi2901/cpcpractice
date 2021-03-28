class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
       unordered_map<int,int> x;
        for(int i=0;i<n;i++)
        {
            x[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(x[arr[i]]%2!=0)
            return arr[i];
        }
    }
};
