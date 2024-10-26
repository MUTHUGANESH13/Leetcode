class Solution {
public:
    int countConsistentStrings(string s, vector<string>& w) {
        set<int>a;
        int i,j,k=0;
        for(char c:s){
            a.insert(c);
        }
        for(i=0;i<w.size();i++){
            for(j=0;j<w[i].size();j++){
                if(!a.contains(w[i][j])){
                    k++;
                    break;
                }
            }
        }
        return(w.size()-k);
    }
};