class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {        
        vector<int> q;
        int t = 0, d = m.size() - 1;
        int l = 0, r = m[0].size() - 1;
        while(t <= d && l <= r) {
            for(int j = l; j <= r; j++) {
                q.push_back(m[t][j]);
            }
            t++;
            for(int i = t; i <= d; i++) {
                q.push_back(m[i][r]);
            }
            r--;
            if(t <= d) {
                for(int j = r; j >= l; j--) {
                    q.push_back(m[d][j]);
                }
                d--;
            }
            if(l <= r) {
                for(int i = d; i >= t; i--) {
                    q.push_back(m[i][l]);
                }
                l++;
            }
        }
        return q;
    }
};
