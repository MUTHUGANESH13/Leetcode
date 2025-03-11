class Solution {
public:
    bool checkDistances(string s, vector<int>& d) {
        vector<int> a(26, -1);
        for (int i = 0; i < s.size(); i++) {
            if (a[s[i] - 'a'] == -1)
                a[s[i] - 'a'] = i;
            else {
                a[s[i] - 'a'] = i - a[s[i] - 'a'] - 1;
                if (a[s[i] - 'a'] != d[s[i] - 'a'])
                    return false;
            }
        }
        return true;
    }
};