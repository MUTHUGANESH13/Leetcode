class Solution {
public:
    void reverseString(vector<char>& s) {
        int i;
        char c;
        for(i=0;i<s.size()/2;i++){
            c=s[i];
            s[i]=s[s.size()-1-i];
            s[s.size()-1-i]=c;
        }
    }
};