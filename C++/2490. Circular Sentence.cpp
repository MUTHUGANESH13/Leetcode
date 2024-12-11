class Solution {
public:
    bool isCircularSentence(string s) {
        if(s[0]!=s.back())
        return false;
        stringstream x(s);
        string c;
        vector<string>a;
        while(x>>c)
        a.push_back(c);
        for(int i=0;i<a.size()-1;i++){
            if(a[i+1][0]!=a[i].back())
            return false;
        }
        return true;
    }
};