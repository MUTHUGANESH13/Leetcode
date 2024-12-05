class Solution {
public:
    vector<string> removeSubfolders(vector<string>& f) {
        sort(f.begin(), f.end());
        vector<string> r;
        r.push_back(f[0]);
        for (int i = 1; i < f.size(); i++) {
            string a = r.back();
            a+= '/';
            if (a!=f[i].substr(0,a.size())) {
                r.push_back(f[i]);
            }
        }
        return r;
    }
};