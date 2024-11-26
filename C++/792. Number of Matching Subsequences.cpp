class Solution {
public:
    bool is(string s,string t){
        int i,f=0;
        for(i=0;i<s.size()&&f < t.size();i++){
            if(s[i]==t[f])
            f++;
        }
        return f==t.size();
    }
    int numMatchingSubseq(string s, vector<string>& w) {
        int i,c=0;
        map<string,bool>a;
        for(i=0;i<w.size();i++){
            if(a.find(w[i])!=a.end()){
                if(a[w[i]])
                c++;
            }
            else{
                bool r=is(s,w[i]);
                a[w[i]]=r;
                if(r)
                c++;
            }
        }
        return c;
    }
};