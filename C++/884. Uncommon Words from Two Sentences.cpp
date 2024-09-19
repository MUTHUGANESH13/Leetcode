class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        int i;
        vector<string> d,f;
        map<string,int>a;
        string s="";
        for(i=0;i<s1.size();i++){
            if(s1[i]==' '){
                d.push_back(s);
                s="";
            }
            else
            s+=s1[i];
        }
        if(s!=" ")
        d.push_back(s);
        s="";
        for(i=0;i<s2.size();i++){
            if(s2[i]==' '){
                d.push_back(s);
                s="";
            }
            else
            s+=s2[i];
        }
        if(s!=" ")
        d.push_back(s);
        for(i=0;i<d.size();i++){
            a[d[i]]++;
        }
        for(auto j=a.begin();j!=a.end();j++){
            if(j->second==1)
            f.push_back(j->first);
        }
        return f;
    }
};