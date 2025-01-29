class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k)
        return false;
        map<char,int>m;
        for(char c:s)
        m[c]++;
        int c=0;
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second%2==1)
            c++;
            if(c>k)
            return false;
        }
        return true;

    }
};