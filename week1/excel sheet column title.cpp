class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
         while(columnNumber>26)
        {if(columnNumber%26==0)
        {
            s='Z'+s;
            columnNumber=(columnNumber-26)/26;
        }
         else
         {
        s=char((columnNumber%26)+64)+s;
            columnNumber=columnNumber/26;
        }}
        s=char(columnNumber+64)+s;
        return s;
        
        
    }
};
