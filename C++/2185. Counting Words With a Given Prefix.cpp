class Solution {
public:
    int prefixCount(vector<string>& w, string p) {
        int k=0;
        for(string c:w){
            if(p==c.substr(0,p.size()))
            k++;
        }
        return k;
    }
};