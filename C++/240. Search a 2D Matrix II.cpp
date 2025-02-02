class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int i=0,j=m[0].size()-1;
        while(i<m.size() && j>=0){
            if(t==m[i][j])
            return true;
            else if(t>m[i][j])
            i++;
            else 
            j--;
        }
        return false;
    }
};