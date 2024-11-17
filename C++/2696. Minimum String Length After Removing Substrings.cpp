class Solution {
public:
    int minLength(string s) {
        vector<char>a;
        bool t=true;
        int i,n;
        for(char c:s){
            a.push_back(c);
        }
        while(t==true){
            n=a.size()-1;
            t=false;
            for(i=n;i>0;i--){
                if((a[i]=='B' && a[i-1]=='A')||(a[i]=='D' && a[i-1]=='C'))
                {
                    a.erase(a.begin()+i);
                    a.erase(a.begin()+i-1);
                    t=true;
                }
            }
            
        }
        return a.size();
    }
};