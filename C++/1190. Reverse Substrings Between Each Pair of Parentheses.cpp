class Solution {
public:
    string reverseParentheses(string s) {
        vector<int>a;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            a.push_back(i);
            else if(s[i]==')'){
                reverse(s.begin()+a.back(),s.begin()+i);
                a.pop_back();
            }
        }
        string k="";
        for(char c:s)
        if(c!=')'&&c!='(')k+=c;
        return k;
    }
};