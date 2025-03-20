class Solution {
public:
    int firstCompleteIndex(vector<int>& a, vector<vector<int>>& m) {
        map<int,int>r,c;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                r[m[i][j]]=i;
                c[m[i][j]]=j;
            }
        }
        vector<int>x(m.size(),0),y(m[0].size(),0);
        for(int i=0;i<a.size();i++){
            if(++x[r[a[i]]]==m[0].size())
            return i;
            if(++y[c[a[i]]]==m.size())
            return i;
        }
        return -1;
    }
};