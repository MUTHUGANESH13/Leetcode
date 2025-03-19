class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& n) {
        map<int,int>m;
        int ma=0;
        for(int i:n){
            m[i]++;
            ma=max(ma,m[i]);
        }
        vector<vector<int>>a(ma);
        map<int,int>x;
        for(int i:n){
            a[x[i]++].push_back(i);
        }
        return a;
    }
};