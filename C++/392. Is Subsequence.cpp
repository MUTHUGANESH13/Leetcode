class Solution {
public:
    bool isSubsequence(string s, string t) {
        int f=0,i;
        for(i=0;i<t.size();i++){
            if(s[f]==t[i])
            f++;
        }
        return s.size()==f;
    }
};