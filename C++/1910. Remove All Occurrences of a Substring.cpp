class Solution {
public:
    string removeOccurrences(string s, string p) {
        while(s.find(p)!=-1){
            s.erase(s.find(p),p.size());
        }
        return s;
    }
};