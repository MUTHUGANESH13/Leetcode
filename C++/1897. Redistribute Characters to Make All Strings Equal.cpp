class Solution {
public:
    bool makeEqual(vector<string>& w) {
        if(w.size()<2)
        return true;
        map<char,int>m;
        for(string s:w){
            for(char c:s){
                m[c]++;
            }
        }
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second%w.size()!=0)
            return false;
        }
        return true;
    }
};