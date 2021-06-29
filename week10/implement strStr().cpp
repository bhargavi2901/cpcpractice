int strStr(string haystack, string needle) {
        if(needle.length()==0)
            return 0;
        int n=needle.length();
        if(n>haystack.length())
            return -1;
        for(int i=0;i<=haystack.length()-n;i++)
        {
            string temp=haystack.substr(i,n);
            if(temp==needle)
                return i;
        }
        return -1;
    }
