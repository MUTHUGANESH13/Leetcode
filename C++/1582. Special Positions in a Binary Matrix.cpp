class Solution {
public:
    int numSpecial(vector<vector<int>>& m) {
        vector<int>r(m.size(),0),c(m[0].size(),0);
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==1){
                    r[i]++;
                    c[j]++;
                }
            }
        }
        int k=0;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==1 && r[i]==1 && c[j]==1){
                    k++;
                }
            }
        }
        return k;
    }
};