class Solution {
public:
    bool rotateString(string s, string g) {
        if(s.size()!=g.size())
        return false;
        string k=s+s;
        return k.find(g)<k.size();
    }
};