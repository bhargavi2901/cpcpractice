string reverseWords(string S) 
    { 
        // code here 
        int r=S.length()-1;
        string s="";
        while(r>=0)
        {string s1="";
            while(r>=0 && S[r]!='.')
            {
               s1=S[r]+s1;
               r--;
            }
            s=s+s1+'.';
            r--;
        }
        return s.erase(s.length()-1);
    } 
