class Solution {
public:
    string oddString(vector<string>& w) {
        map<string,int>m;
        vector<string>l;
        for(string s:w){
            string k="";
            for(int i=0;i<s.size()-1;i++){
                k+=to_string((s[i+1]-s[i]));
            }
            l.push_back(k);
            m[k]++;
        }
        for(int i=0;i<l.size();i++){
            if(m[l[i]]==1)
            return w[i];
        }
        return w.back();
    }
};