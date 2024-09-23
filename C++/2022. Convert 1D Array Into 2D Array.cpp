class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
        if(m*n!=o.size()){
        vector<vector<int>>a;
        return a;
        }
        vector<vector<int>>a(m,vector<int>(n));
        int i,j,k=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                a[i][j]=o[k++];
            }
        }
        return a;
    }
};