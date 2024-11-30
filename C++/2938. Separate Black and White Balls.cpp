class Solution {
public:
    long long minimumSteps(string s) {
    long long c=0;
    int i,w=0;
    for(i=0;i<s.size();i++){
        if(s[i]=='0'){
            c+=i-w;
            w++;
        }
    }
        return c;
    }
};