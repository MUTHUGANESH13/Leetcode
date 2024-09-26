class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& p) {
        sort(p.begin(),p.end());
        int i,m=0;
        for(i=0;i<p.size()-1;i++){
            if(m<(p[i+1][0]-p[i][0]))
            m=p[i+1][0]-p[i][0];
        }
        return m;
    }
};