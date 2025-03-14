class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& g) {
        vector<vector<int>>a(g.size(),vector<int>(g[0].size(),0));
        vector<int>o(g.size(),0),zr(g.size(),0),oc(g[0].size(),0),zc(g[0].size(),0);
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]==1){
                    o[i]++;
                    oc[j]++;
                }
                else{
                    zr[i]++;
                    zc[j]++;
                }
            }
        }
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                a[i][j]=o[i]+oc[j]-zr[i]-zc[j];
            }
        }
        return a;
    }
};