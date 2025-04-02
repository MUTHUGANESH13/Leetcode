class Solution {
public:
    int maximumLengthSubstring(string s) {
        int m=0;
        for(int i=0;i<s.size();i++){
            int f[26]={};
            int k=0;
            for(int j=i;j<s.size();j++){
                f[s[j]-'a']++;
                if(f[s[j]-'a']>2)
                break;
                k++;
            }
            m=max(m,k);
        }
        return m;
    }
};