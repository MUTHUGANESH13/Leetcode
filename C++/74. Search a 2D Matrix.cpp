class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int i,j;
        for(i=0;i<m.size();i++)
        {
            if(m[i][0]<=t && m[i][m[0].size()-1]>=t)
            {
                for(j=0;j<m[0].size();j++)
                {
                    if(m[i][j]==t)
                    return true;
                }
            }
        }
        return false;
    }
};