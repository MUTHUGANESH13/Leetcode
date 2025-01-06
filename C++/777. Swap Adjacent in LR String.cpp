class Solution {
public:
    bool canTransform(string s, string t) {
        int i=0,j=0;
        while(i<s.size()||j<s.size()){
            while(i<s.size()&&s[i]=='X')
            i++;
            while(j<s.size()&&t[j]=='X')
            j++;
            if(i==s.size()||j==s.size())
            return i==s.size()&&j==s.size();
            if((s[i]!=t[j])||(s[i]=='L'&&i<j)||(s[i]=='R'&&i>j))
            return false;
            i++;
            j++;
        }
        while(i<s.size()&&s[i]=='X')
        i++;
        while(j<s.size()&&t[j]=='X')
        j++;
        return i==s.size()&&j==s.size();
    }
};