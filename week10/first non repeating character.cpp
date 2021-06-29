char nonrepeatingCharacter(string str)
    {
       //Your code here
       int a[256];
       for(int i=0;i<256;i++)
       a[i]=-1;
       for(int i=0;i<str.length();i++){
         if(a[str[i]]==-1)
         a[str[i]]=i;
         else
         a[str[i]]=-2;
       }
       int max=INT_MAX;
       for(int i=0;i<256;i++)
       {
           if(a[i]>=0)
           max=min(max,a[i]);
       }
       if(max!=INT_MAX)
       return str[max];
       return '$';
    }
