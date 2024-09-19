class Solution {
public:
    string shiftingLetters(string s, vector<int>& a) {
        int i, p = 0;
        for (i = s.size() - 1; i >= 0; i--) {
            p = (p + a[i]) % 26;
            s[i] = (s[i] - 'a' + p) % 26 + 'a';
        }
        return s;
    }
};