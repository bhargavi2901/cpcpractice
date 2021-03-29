string reverseWord(string str){
    
  //Your code here
  for(int i=0;i<str.length()/2;i++)
  {
      char temp=str[i];
      str[i]=str[str.length()-i-1];
      str[str.length()-i-1]=temp;
      
  }
  return str;
}
