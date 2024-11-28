class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m) {
        vector<vector<int>>a(m[0].size(),vector<int>(m.size()));
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++)
            a[j][i]=m[i][j];
        }
        return a;
    }
};