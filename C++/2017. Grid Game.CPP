class Solution {
public:
    long long gridGame(vector<vector<int>>& g) {
        long long f=accumulate(g[0].begin(),g[0].end(),0LL),s=0,m=LONG_LONG_MAX;
        for(int i=0;i<g[0].size();i++){
            f-=g[0][i];
            m=min(m,max(f,s));
            s+=g[1][i];
        }
        return m;
    }
};