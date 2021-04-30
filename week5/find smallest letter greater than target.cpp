class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
     int n=letters.size();
        if(target<letters[0])
         return letters[0];
        if(target>letters[n-1])
            return letters[0];
        int l=0,flag=0;
        int r=n-1,m;
        while(l<=r)
        {
            m=l+(r-l)/2;
            if(letters[m]==target)
            {
                flag=1;
                while(m<n-1&&letters[m+1]==target)
                {
                    m++;
                }
                break;
            }
            if(letters[m]<target)
                l=m+1;
            else
                r=m-1;
        }
        if(flag==1)
        {
            if(m==n-1)
                return letters[0];
            else
                return letters[m+1];
        }
    if(letters[m]<target)
        return letters[m+1];
        else
            return letters[m];
    }
};
