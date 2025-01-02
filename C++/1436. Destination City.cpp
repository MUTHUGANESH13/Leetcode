class Solution {
public:
    string destCity(vector<vector<string>>& p) {
        map<string,int>m;
        for(int i=0;i<p.size();i++){
            m[p[i][0]]++;
            m[p[i][1]]+=0;
        }
        for(auto it:m){
            if(it.second==0)
            return it.first;
        }
        return " ";
    }
};