class Solution {
public:
    int minimumDeletions(string s) {
        int i,r=0,b=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='b')
            b++;
            else if(b!=0){
                b--;
                r++;
            }
        }
        return r;
    }
};