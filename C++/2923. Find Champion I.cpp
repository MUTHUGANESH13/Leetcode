class Solution {
public:
    int findChampion(vector<vector<int>>& g) {
        for(int i=0;i<g.size();i++){
            bool t=true;
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]!=1 && i!=j)
                t=false;
            }
            if(t)return i;
        }
        return -1;
    }
};