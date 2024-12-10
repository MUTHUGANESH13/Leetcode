class Solution {
public:
    string makeFancyString(string s) {
        if(s.size()<3)
        return s;
        for(int i=s.size()-1;i>=2;i--){
            if(s[i]==s[i-1]){
                if(s[i-1]==s[i-2])
                s.erase(s.begin()+i);
            }
        }
        return s;
    }
};