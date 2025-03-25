class Solution {
public:
    int numberOfPoints(vector<vector<int>>& n) {
        set<int>s;
        for(int i=0;i<n.size();i++){
            for(int j=n[i][0];j<=n[i][1];j++)
            s.insert(j);
        }
        return s.size();

    }
};