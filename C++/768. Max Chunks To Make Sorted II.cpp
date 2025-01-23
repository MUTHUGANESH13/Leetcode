class Solution {
public:
    int maxChunksToSorted(vector<int>& a) {
        vector<int> b{a.begin(), a.end()};
        sort(b.begin(), b.end());
        int c = 0;
        long long s1 = 0, s2 = 0;
        for (int i = 0; i < a.size(); i++) {
            s1 += a[i];
            s2 += b[i];
            if (s1 == s2) {
                c++;
            }
        }
        return c;
    }
};
