class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& o) {
        int i,r=m,c=n;
        for(i=0;i<o.size();i++){
            r=min(r,o[i][0]);
            c=min(c,o[i][1]);
        }
        return(r*c);
    }
};