class Solution {
public:
    void moveZeroes(vector<int>& n) {
        int l = 0;
        for (int i = 0; i < n.size(); i++) {
            if (n[i] != 0) {
                n[l++] = n[i];
            }
        }
        while (l < n.size()) {
            n[l++] = 0;
        }
    }
};