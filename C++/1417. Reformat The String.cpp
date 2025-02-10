class Solution {
public:
    string reformat(string s) {
        string a, b, c;
        for (char ch : s) {
            if (ch >= '0' && ch <= '9') a += ch;
            else b += ch;
        }
        if (abs((int)a.size() - (int)b.size()) > 1) 
            return "";
        if (a.size() == b.size()) {
            for (int i = 0; i < a.size(); i++) {
                c.push_back(b[i]);
                c.push_back(a[i]);
            }
        }
        else if (a.size() > b.size()) {
            for (int i = 0; i < b.size(); i++) {
                c.push_back(a[i]);
                c.push_back(b[i]);
            }
            c.push_back(a.back());
        }
        else {
            for (int i = 0; i < a.size(); i++) {
                c.push_back(b[i]);
                c.push_back(a[i]);
            }
            c.push_back(b.back());
        }
        return c;
    }
};
