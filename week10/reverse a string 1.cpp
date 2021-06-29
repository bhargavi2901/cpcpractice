void fun(string &str,int i,int j)
{
    if(i>=j)
    return;
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    fun(str,i+1,j-1);
}
string reverseWord(string str){
    
  //Your code here
      fun(str,0,str.length()-1);
      return str;
}
