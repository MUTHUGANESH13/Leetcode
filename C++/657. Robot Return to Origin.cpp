class Solution {
public:
    bool judgeCircle(string m) {
        int u=0,d=0,l=0,r=0,i;
        for(i=0;i<m.size();i++)
        {
            if(m[i]=='U')
            u++;
            else if(m[i]=='R')
            r++;
            else if(m[i]=='D')
            u--;
            else if(m[i]=='L')
            r--;
            else
            continue;
        }
        return(u==0 && r==0);
    }
};