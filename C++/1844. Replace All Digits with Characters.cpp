class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 1; i < s.size(); i++) {
            if (i % 2 != 0) {
                s[i] = (s[i] + ((s[i - 1]) + 0)) - '0';
            }
        }
        return s;
    }
};