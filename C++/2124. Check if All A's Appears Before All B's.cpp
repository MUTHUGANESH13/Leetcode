class Solution {
public:
    bool checkString(string s) {
        int i,f=0;
        for(i=0;i<s.size()-1;i++)
        {
            if(s[i]=='b' && s[i+1]=='a')
            f=1;
            else
            continue;
        }
        return(f==0);
        
    }
};