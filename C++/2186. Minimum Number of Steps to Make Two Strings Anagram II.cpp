class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>a(26,0),b(26,0);
        for(char c:s)
        a[c-'a']++;
        for(char c:t)
        b[c-'a']++;
        int k=0;
        for(int i=0;i<26;i++)
        k+=abs(a[i]-b[i]);
        return k;
    }
};