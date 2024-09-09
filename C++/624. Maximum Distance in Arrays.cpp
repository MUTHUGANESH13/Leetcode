class Solution {
public:
    int maxDistance(vector<vector<int>>& a) {
        int m,M,i,x=0;
        m=a[0][0];
        M=a[0][a[0].size()-1];
        for(i=1;i<a.size();i++){
            x=max(x,max(abs(m-a[i][a[i].size()-1]),abs(M-a[i][0])));
            m=min(m,a[i][0]);
            M=max(M,a[i][a[i].size()-1]);
        }
        return x;
    }
};