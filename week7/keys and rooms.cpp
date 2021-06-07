class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int v[rooms.size()];
        for(int i=0;i<rooms.size();i++)
            v[i]=0;
        stack<int> s;
        s.push(0);
        while(!s.empty())
        {
            int i=s.top();
            v[i]=1;
            s.pop();
            for(auto it:rooms[i])
            {if(v[it]!=1)
                s.push(it);}
        }
        for(int i=0;i<rooms.size();i++)
        {
            if(v[i]==0)
                return false;
        }
        return true;
    }
};
