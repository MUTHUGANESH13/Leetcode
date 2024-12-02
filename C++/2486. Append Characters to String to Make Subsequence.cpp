class Solution {
public:
    int appendCharacters(string s, string t) {
        int i,f=0;
        for(i=0;i<s.size();i++){
            if(s[i]==t[f])
            f++;
        }
        return t.size()-f;
    }
};