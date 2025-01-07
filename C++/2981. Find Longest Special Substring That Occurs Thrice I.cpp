class Solution {
public:
    int maximumLength(string s) {
        map<string,int>m;
        for(int i=0;i<s.size();i++){
            string k="";
            k+=s[i];
            m[k]++;
            for(int j=i+1;j<s.size();j++){
                if(k.back()==s[j]){
                k+=s[j];
                m[k]++;
                }
                else
                break;
            }
        }
        int a=0;
        for(auto i:m){
            if(i.second>2&&i.first.size()>a)
            a=i.first.size();
        }
        if(a==0)
        return -1;
        return a;
    }
};