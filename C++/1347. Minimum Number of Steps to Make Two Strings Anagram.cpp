class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>a(26,0);
        int c=0;
        for(int i=0;i<s.size();i++){
            a[t[i]-'a']++;
            a[s[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        c+=max(0,a[i]);
        return c;
    }
};