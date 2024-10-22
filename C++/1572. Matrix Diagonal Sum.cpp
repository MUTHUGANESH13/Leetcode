class Solution {
public:
    int diagonalSum(vector<vector<int>>& m) {
        int s=0,i,j=0;
        for(i=0;i<m.size();i++){
            s+=m[i][i];
        }
        while(i!=0 && j!=m.size()){
            s+=m[--i][j++];
        }
        if(m.size()%2!=0)
        s-=m[m.size()/2][m.size()/2];
        return s;
    }
};