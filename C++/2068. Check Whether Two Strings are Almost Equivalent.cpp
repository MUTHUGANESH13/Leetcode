class Solution {
public:
    bool checkAlmostEquivalent(string w1, string w2) {
        vector<int>a(26,0),b(26,0);
        for(int i=0;i<w1.size();i++){
            a[w1[i]-'a']++;
            b[w2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(abs(a[i]-b[i])>3)
            return false;
        }
        return true;
    }
};