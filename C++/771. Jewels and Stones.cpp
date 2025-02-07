class Solution {
public:
    int numJewelsInStones(string j, string s) {
        map<char,int>m;
        for(char c:s)
        m[c]++;
        int k=0;
        for(char c:j)
        k+=m[c];
        return k;
    }
};