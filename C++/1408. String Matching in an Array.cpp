class Solution {
public:
    vector<string> stringMatching(vector<string>& w) {
        set<string>s;
        for(int i=0;i<w.size();i++){
            for(int j=i+1;j<w.size();j++){
                if(w[i].size()>w[j].size()){
                    if(w[i].find(w[j])!=-1)
                    s.insert(w[j]);
                }
                else{
                    if(w[j].find(w[i])!=-1)
                    s.insert(w[i]);
                }
            }
        }
        vector<string>a(s.begin(),s.end());
        return a;
    }
};