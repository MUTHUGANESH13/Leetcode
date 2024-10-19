class Solution {
public:
    int countNegatives(vector<vector<int>>& g) {
        int i,k=0;
        for(i=0;i<g.size();i++){
            for(int j:g[i]){
                if(j<0)
                k++;
            }
        }
        return k;
    }
};