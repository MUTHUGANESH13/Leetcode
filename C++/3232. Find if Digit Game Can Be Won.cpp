class Solution {
public:
    bool canAliceWin(vector<int>& n) {
        int i,s=0,r=0;
        for(i=0;i<n.size();i++)
        {
            if(n[i]<10)
            s+=n[i];
            else
            r+=n[i];
        }
        if(r==s)
        return false;
        else
        return true;
    }
};