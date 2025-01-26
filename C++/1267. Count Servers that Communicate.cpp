class Solution {
public:
    int countServers(vector<vector<int>>& g) {
        vector<int>r(g.size(),0),c(g[0].size(),0);
        int a=0;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]==1){
                    r[i]++;
                    c[j]++;
                }
            }
        }
            for(int i=0;i<g.size();i++){
                for(int j=0;j<g[0].size();j++){
                    if(g[i][j]==1){
                        if(r[i]>1 || c[j]>1)
                        a++;
                    }
                }
            }
            return a;
    }
};