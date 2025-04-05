class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char,int>m,n;
        for(int i=0;i<s.size();i++){
        m[s[i]]=i;
        n[t[i]]=i;
        }
        int k=0;
        for(char c:s){
            k+=abs(m[c]-n[c]);
        }
        return k;
    }
};