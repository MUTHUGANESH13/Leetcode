class Solution {
public:
    string mostCommonWord(string p, vector<string>& b) {
        map<string, int> m;
        for (string s : b) m[s] = -1;
        string s = "";
        for (char &c : p) {
            if (isalpha(c)) s += tolower(c);
            else {
                if (!s.empty()) {
                    if (m[s] != -1) m[s]++;
                    s = "";
                }
            }
        }
        if (!s.empty() && m[s] != -1) m[s]++;
        int d = 0;
        s = "";
        for (auto i = m.begin(); i != m.end(); i++) {
            if (i->second > d) {
                d = i->second;
                s = i->first;
            }
        }
        return s;
    }
};