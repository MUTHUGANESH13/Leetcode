class Solution {
public:
    bool canMakeSubsequence(string s1, string s2) {
        if(s1.size()<s2.size())
        return false;
        int i,f=0;
        for(i=0;i<s1.size();i++){
            if((s1[i]=='z' && s2[f]=='a')||(s2[f]-s1[i]==0)||(s2[f]-s1[i]==1))
            f++;
        }
        return f==s2.size();
    }
};