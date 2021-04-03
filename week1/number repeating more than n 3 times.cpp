int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long c=0,c1=0,num1=0,num2=0;
    for(int i=0;i<A.size();i++)
    {  if(A[i]==num1)
      {
        c++;
      }
      else if(A[i]==num2)
         c1++;
        else if(c==0)
        {
            num1=A[i];
            c++;
        }
        else if(c1==0)
         { num2=A[i];
         c1++;
         }
        else
        {
            c--;
            c1--;
        }
    }int s=0,s1=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==num1)
        {
            s++;
        }
        else if(A[i]==num2)
        s1++;
    }
    if(s>A.size()/3)
      return num1;
     else if(s1>A.size()/3)
     return num2;
     else
     return -1;
}
