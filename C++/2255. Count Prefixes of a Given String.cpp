class Solution {
public:
    int countPrefixes(vector<string>& w, string s) {
        int k=0;
        for(string c:w){
            if(s.substr(0,c.size())==c)
            k++;
        }
        return k;
    }
};