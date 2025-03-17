class Solution {
public:
    int splitNum(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        string a="",b="";
        for(int i=0;i<s.size();i++){
            if(i%2==0)
            a+=s[i];
            else
            b+=s[i];
        }
        return(stoi(a)+stoi(b));
    }
};