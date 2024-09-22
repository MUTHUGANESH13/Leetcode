class Solution {
public:
    vector<int> sortArray(vector<int>& n) {
        if (n.size() > 1) {
            int m = n.size() / 2;
            vector<int> lf(n.begin(), n.begin() + m);
            vector<int> rf(n.begin() + m, n.end());
            
            lf = sortArray(lf);
            rf = sortArray(rf);
            
            int i = 0, j = 0, k = 0;
            while (i < lf.size() && j < rf.size()) {
                if (lf[i] < rf[j]) {
                    n[k++] = lf[i++];
                } else {
                    n[k++] = rf[j++];
                }
            }
            
            while (i < lf.size()) {
                n[k++] = lf[i++];
            }
            
            while (j < rf.size()) {
                n[k++] = rf[j++];
            }
        }
        return n;
    }
};