class Solution {
public:
    int maxRepeating(string s, string w) {
        int c=0;
        string a=w;
        while(s.find(a)!=-1){
            a+=w;
            c++;
        }
        return c;
    }
};