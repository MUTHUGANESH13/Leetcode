class Solution {
public:
    bool isPrefixAndSuffix(string s1,string s2){
        if(s1.size()>s2.size())
        return false;
        if(s2.substr(0,s1.size())==s1 && s2.substr(s2.size()-s1.size(),s1.size())==s1)
        return true;
        return false;
    }
    int countPrefixSuffixPairs(vector<string>& w) {
        int c=0;
        for(int j=0;j<w.size();j++){
        for(int i=j+1;i<w.size();i++){
            if(isPrefixAndSuffix(w[j],w[i]))
            c++;
        }}
        return c;
    }
};