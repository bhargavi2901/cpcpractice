	vector<string> v;
	void fun(string s,string res)
	{
	    if(s.length()==0)
	    v.push_back(res);
	    for(int i=0;i<s.length();i++)
	    {
	        string left=s.substr(0,i);
	        string right=s.substr(i+1);
	        char ch=s[i];
	        fun(left+right,res+ch);
	    }
	}
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    fun(S,"");
		    sort(v.begin(),v.end());
		    return v;
		}
