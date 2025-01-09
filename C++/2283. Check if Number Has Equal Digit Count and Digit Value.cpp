class Solution {
public:
    bool digitCount(string n) {
        map<int,int>m;
        for(char c:n){
            m[(c-'0')]++;
        }
        for(int i=0;i<n.size();i++){
            if(m[i]!=(n[i]-'0'))
            return false;
        }
        return true;
    }
};