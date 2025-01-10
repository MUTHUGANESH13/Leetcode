class Solution {
public:
    int maximumBeauty(vector<int>& n, int k) {
       sort(n.begin(), n.end());
        int m = 0, l = 0;
        for (int r = 0; r < n.size(); r++) {
            while (n[r] - n[l] > 2 * k) l++;
            m = max(m, r - l + 1);
        }
        return m;
    }
};