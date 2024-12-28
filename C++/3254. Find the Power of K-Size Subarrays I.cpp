class Solution {
public:
    vector<int> resultsArray(vector<int>& n, int k) {
        vector<int> r;
        for (int i = 0; i <= n.size() - k; i++) {
            bool t = true;
            int m = n[i]; 
            for (int j = 1; j < k; j++) {
                if (n[i + j] != n[i + j - 1] + 1) {
                    t = false;
                    break;
                }
                m = n[i + j]);
            }
            if (t) {
                r.push_back(m);
            } else {
                r.push_back(-1);
            }
        }
        
        return r;
    }
};
