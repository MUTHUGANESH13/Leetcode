class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        vector<int> b, c, d;
        c = a;
        sort(a.begin(), a.end());
        if(a.size()!=0)
        b.push_back(a[0]);
        else
        return {};
        for (int i = 1; i < a.size(); i++) {
            if (a[i] != b.back()) b.push_back(a[i]);
        }
        map<int, int> x;
        for (int i = 0; i < b.size(); i++) x[b[i]] = i + 1;
        for (int i = 0; i < c.size(); i++) d.push_back(x[c[i]]);
        return d;
    }
};