class Solution {
public:
    vector<int> xorQueries(vector<int>& a, vector<vector<int>>& q) {
        vector<int>x;
        int i,j,s;
        for(i=0;i<q.size();i++){
            s=0;
            for(j=q[i][0];j<=q[i][1];j++){
                s^=a[j];
            }
            x.push_back(s);
        }
        return x;
    }
};