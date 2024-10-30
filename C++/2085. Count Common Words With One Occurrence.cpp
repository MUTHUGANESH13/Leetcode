class Solution {
public:
    int countWords(vector<string>& w1, vector<string>& w2) {
        vector<string> a, b;
        map<string, int> x;
        int i, c = 0;
        map<string, int> f1,f2;
        for (i = 0; i < w1.size(); i++) {
            f1[w1[i]]++;
        }
        for (i = 0; i < w1.size(); i++) {
            if (f1[w1[i]] == 1) {
                a.push_back(w1[i]);
            }
        }
        for (i = 0; i < w2.size(); i++) {
            f2[w2[i]]++;
        }
        for (i = 0; i < w2.size(); i++) {
            if (f2[w2[i]] == 1) {
                b.push_back(w2[i]);
            }
        }
        for (i = 0; i < b.size(); i++) {
            a.push_back(b[i]);
        }
        for (i = 0; i < a.size(); i++) {
            x[a[i]]++;
        }
        for (auto j = x.begin(); j != x.end(); j++) {
            if (j->second == 2) {  
                c++;
            }
        }
        return c;
    }
};
