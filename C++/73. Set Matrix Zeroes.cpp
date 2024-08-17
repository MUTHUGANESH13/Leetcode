class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        int i,j;
        vector<int>r(m.size(),1);
        vector<int>c(m[0].size(),1);
        for(i=0;i<m.size();i++){
            for(j=0;j<m[0].size();j++){
                if(m[i][j]==0){
                    r[i]=0;
                    c[j]=0;
                }
            }
        }
        for(i=0;i<m.size();i++){
            for(j=0;j<m[0].size();j++){
                if(r[i]==0 || c[j]==0)
                m[i][j]=0;
            }
        }
    }
};