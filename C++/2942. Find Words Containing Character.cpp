class Solution {
public:
    bool is(string s,char x){
        for(char c:s){
            if(c==x)
            return true;
        }
        return false;
    }
    vector<int> findWordsContaining(vector<string>& w, char x) {
        vector<int>a;
        for(int i=0;i<w.size();i++){
            if(is(w[i],x))
            a.push_back(i);
        }
        return a;
    }
};