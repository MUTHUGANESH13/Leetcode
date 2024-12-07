class Solution {
public:
    int numDifferentIntegers(string w) {
        int a,m;
        string s="";
        set<string>x;
        for(char c:w){
            if(c>='0'&&c<='9')
            s+=c;
            else{
                if(s.size()!=0){
                    m=0;
                    while(s[m]=='0'&& m < s.size())
                    m++;                
                x.insert(s.substr(m));}
                s="";
            }
        }
        if(s.size()!=0){
                    m=0;
                    while(s[m]=='0'&& m < s.size())
                    m++;
               x.insert(s.substr(m));}
        return x.size();
    }
};