class Solution {
public:
    bool is(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        return true;
        return false;
    }
    vector<int> vowelStrings(vector<string>& w, vector<vector<int>>& q) {
        int c=0;
        vector<int>a,b;
        for(string s:w){
            if(is(s[0])&&is(s.back()))
            c++;
            a.push_back(c);
        }
        for(int i=0;i<q.size();i++){
            int m=a[q[i][1]]-(q[i][0]>0?a[q[i][0]-1]:0);
            b.push_back(m);
        }
        return b;
    }
};
