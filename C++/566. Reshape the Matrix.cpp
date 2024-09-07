class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& m, int r, int c) {
    if(r*c!=m.size()*m[0].size())
    return m;
    int i,j,x=0,y=0;
    vector<vector<int>>a(r,vector<int>(c));
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(y>=m[0].size()){
                x++;
                y=0;
                a[i][j]=m[x][y++];
            }
            else{
                a[i][j]=m[x][y++];
            }
        }
     }
     return a;   
    }
};