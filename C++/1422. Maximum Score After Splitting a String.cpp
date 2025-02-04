class Solution {
public:
    int maxScore(string s) {
        int o=0,z=0,m=0;
        for(char c:s){
            if(c=='1')
            o++;
        }
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0')
            z++;
            else
            o--;
            m=max(m,z+o);
        }
        return m;
    }
};