class Solution {
public:
    bool is(string s){
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-i-1])
            return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& w) {
        for(string s:w){
            if(is(s))
            return s;
        }
        return "";
    }
};