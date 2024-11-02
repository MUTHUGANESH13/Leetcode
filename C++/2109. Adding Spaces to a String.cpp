class Solution {
public:
    string addSpaces(string s, vector<int>& d) {
        string k="";
        int j=0;
        for(int i:d){
            k+=s.substr(j,i-j)+' ';
            j=i;
        }
        k+=s.substr(j);
        return k;
    }
};