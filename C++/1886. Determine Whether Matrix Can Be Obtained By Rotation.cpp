class Solution {
public:
    void vo(vector<vector<int>>& m){
        for(int i=0;i<m.size();i++){
            for(int j=i+1;j<m.size();j++)
            swap(m[i][j],m[j][i]);
        }
        for(int i=0;i<m.size();i++){
                reverse(m[i].begin(),m[i].end());
        }
    }
    bool findRotation(vector<vector<int>>& m, vector<vector<int>>& t) {
        for(int i=0;i<4;i++){
            if(m==t)
            return true;
            vo(m);
        }
        return false;
    }
};