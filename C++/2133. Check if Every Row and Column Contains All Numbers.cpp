class Solution {
public:
    bool checkValid(vector<vector<int>>& m) {
        int i,j;
        for(i=0;i<m.size();i++){
            vector<int>r(m.size()+1,0);
            vector<int>c(m.size()+1,0);
            for(j=0;j<m.size();j++){
                if(r[m[i][j]]==1)
                return false;
                r[m[i][j]]=1;
                if(c[m[j][i]]==1)
                return false;
                c[m[j][i]]=1;
            }
        }
        return true;
    }
};