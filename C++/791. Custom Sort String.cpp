class Solution {
public:
    string customSortString(string o, string s) {
        map<char,int>m;
        string a="",b="";
        for(char c:s){
            m[c]++;
        }
        for(char c:o){
            while(m[c]!=0){
                a+=c;
                m[c]--;
            }
        }
        for(char c:s){
            if(m[c]!=0)
            b+=c;
        }
        sort(b.begin(),b.end());
        a+=b;
        return a;
    }
};