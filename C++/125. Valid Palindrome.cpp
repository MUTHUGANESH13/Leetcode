class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string str="";
        int i;
        for(i=0;i<s.size();i++){
            if((int)s[i]>96 && (int)s[i]<123||(int)s[i] > 47 && (int)s[i] < 58)
            str+=s[i];
        }
        for(i=0;i<str.size()/2;i++){
            if(str[i]!=str[str.size()-i-1])
            return false;
        }
        return true;
    }
};