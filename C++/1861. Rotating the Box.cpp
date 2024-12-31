class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& b) {
        int m = b.size();
        int n = b[0].size();
        vector<vector<char>> v(n, vector<char>(m));        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                v[i][j] = b[j][i];
            }
        }        
        for (int i = 0; i < n; i++) {
            reverse(v[i].begin(), v[i].end());
        }        
        for (int j = 0; j < m; j++) {
            int l = n - 1;
            for (int i = n - 1; i >= 0; i--) {
                if (v[i][j] == '#') {
                    v[i][j] = '.';
                    v[l][j] = '#';
                    l--;
                }
                if (v[i][j] == '*') {
                    l = i - 1;
                }
            }
        }        
        return v;
    }
};
