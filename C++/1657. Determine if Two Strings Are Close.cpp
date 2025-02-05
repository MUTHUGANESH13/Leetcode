class Solution {
public:
    bool closeStrings(string w1, string w2) {
        vector<int>a(26,0),b(26,0);
        set<int>x,y;
        for(char c:w1){
            a[c-'a']++;
            x.insert(c);
        }
        for(char c:w2){
            b[c-'a']++;
            y.insert(c);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a==b && x==y;
    }
};