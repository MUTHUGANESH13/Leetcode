class Solution {
public:
    string finalString(string s) {
        string a="";
        for(char c:s){
            if(c=='i')
            reverse(a.begin(), a.end());
            else
            a+=c;
        }
        return a;
    }
};