class Solution {
public:
    string reverseWords(string s) {
        vector<string> a;
        string r;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (!r.empty()) {
                    a.push_back(r);
                    r = "";
                }
            } else {
                r = r + s[i];
            }
        }
        if(!r.empty())
        a.push_back(r);
        string r1;
        for (int i = a.size() - 1; i >= 0; i--) {
            r1 = r1 + a[i];
            if(i!=0)
            r1=r1+" ";
        }
        return r1;
    }
};