class Solution {
public:
    vector<int> leftRightDifference(vector<int>& n) {
        vector<int> a(n.size());
        vector<int> b(n.size());
        a[0] = 0;
        b[n.size() - 1] = 0;
        for (int i = 1; i < n.size(); i++)
            a[i] = a[i - 1] + n[i - 1];
        for (int i = n.size() - 2; i >= 0; i--)
            b[i] = b[i + 1] + n[i + 1];
        for (int i = 0; i < a.size(); i++)
            b[i] = abs(a[i] - b[i]);
        return b;
    }
};