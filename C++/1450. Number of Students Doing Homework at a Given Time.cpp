class Solution {
public:
    int busyStudent(vector<int>& s, vector<int>& e, int q) {
        int i,c=0;
        for(i=0;i<s.size();i++){
            if(s[i]<=q && q<=e[i])
            c++;
        }
        return c;
    }
};