class Solution {
public:
    bool isPrefixString(string s, vector<string>& w) {
        string k="";
        for(string c:w){
            k+=c;
            if(k==s)
            return true;
        }
        return false;
    }
};