class Solution {
public:
    int minimumLength(string s) {
        map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        int k=0;
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second%2==0)
            k+=2;
            else
            k++;
        }
        return k;
    }
};