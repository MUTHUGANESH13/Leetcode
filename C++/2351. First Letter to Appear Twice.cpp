class Solution {
public:
    char repeatedCharacter(string s) {
        set<char>x;
        for(int i=0;i<s.size();i++){
            x.insert(s[i]);
            if(x.size()!=i+1)
            return s[i];
        }
        return 'a';
    }
};