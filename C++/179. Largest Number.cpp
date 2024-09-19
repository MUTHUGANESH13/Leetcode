class Solution {
public:
    static bool c(string a,string b){
        return a+b>b+a;
    }
    string largestNumber(vector<int>& n) {
        vector<string> a;
        for(int i:n){
            a.push_back(to_string(i));
        }
        sort(a.begin(),a.end(),c);
        if(a[0]=="0")
        return "0";
        string b="";
        for(string s:a){
            b+=s;
        }
        return b;
    }
};