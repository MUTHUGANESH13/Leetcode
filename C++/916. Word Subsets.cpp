class Solution {
public:
    vector<string> wordSubsets(vector<string>& w, vector<string>& v) {
        map<char,int>r;
        vector<string>a;
        for(string s:v){
            map<char,int>m;
            for(char c:s){
                m[c]++;
                r[c]=max(r[c],m[c]);
            }
        }
        for(string s:w){
            map<char,int>l;
            for(char c:s)
                l[c]++;
            bool t=true;
            for(auto i=r.begin();i!=r.end();i++){
                if(i->second >l[i->first]){
                    t=false;
                    break;
                }
            }
            if(t)
                a.push_back(s);
        }
        return a;
    }
};